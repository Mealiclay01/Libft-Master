/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:20 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Compares up to 'n' characters of 's1' and 's2'.
** Similar to strcmp, but with a size limit.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cur;

	if (n == 0)
		return (0);
	cur = 0;
	while (s1[cur] && s2[cur])
	{
		if (s1[cur] != s2[cur] || cur >= n - 1)
			return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
		cur++;
	}
	return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
}
//-------------------------test: ft_strncmp-------------------------
/*
#include <stddef.h>
#include <stdio.h>

int	main(void)
{
	int	result;

	// Test 1: Zero-length comparison
	result = ft_strncmp("Hello", "Hello", 0);
	printf("Test 1 (n = 0): %d\n", result); // Expected: 0
	// Test 2: Exact match
	result = ft_strncmp("Hello", "Hello", 5);
	printf("Test 2 (Exact match): %d\n", result); // Expected: 0
	// Test 3: Partial match, first `n` characters match
	result = ft_strncmp("Hello, World!", "Hello, there!", 7);
	printf("Test 3 (Partial match up to `n`): %d\n", result); // Expected: 0
	// Test 4: First differing character within `n`
	result = ft_strncmp("Hello", "Hella", 5);
	printf("Test 4 (First differing character): %d\n", result);
		// Expected: non-zero (positive or negative based on ASCII diff)
	// Test 5: Different lengths, `s1` shorter
	result = ft_strncmp("Hi", "Hello", 5);
	printf("Test 5 (s1 shorter than s2): %d\n", result); // Expected: non-zero
	// Test 6: Different lengths, `s2` shorter
	result = ft_strncmp("Hello", "Hi", 5);
	printf("Test 6 (s2 shorter than s1): %d\n", result); // Expected: non-zero
	// Test 7: One string empty
	result = ft_strncmp("", "Hello", 5);
	printf("Test 7 (s1 empty): %d\n", result);
		// Expected: negative (since '' < 'H')
	result = ft_strncmp("Hello", "", 5);
	printf("Test 8 (s2 empty): %d\n", result);
		// Expected: positive (since 'H' > '')
	// Test 9: Case sensitivity
	result = ft_strncmp("abc", "ABC", 3);
	printf("Test 9 (Case sensitivity): %d\n", result); // Expected: non-zero
	// Test 10: Comparison limited by `n`
	result = ft_strncmp("abcdef", "abcxyz", 3);
	printf("Test 10 (Comparison limited by n): %d\n", result); // Expected: 0
	return (0);
}
*/