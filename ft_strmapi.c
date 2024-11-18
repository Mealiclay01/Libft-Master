/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:19 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Applies the function 'f' to each character of 's', creating a new string.
** 'f' receives the character's index and value as arguments.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	cur;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	cur = 0;
	while (s[cur])
	{
		result[cur] = f(cur, s[cur]);
		cur++;
	}
	result[cur] = 0;
	return (result);
}
//------------------test: ft_strmapi-----------------
/*
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// Inline test functions
char	identity(unsigned int i, char c) {
	(void)i; // Avoid unused parameter warning
	return (c);
}

char	to_upper(unsigned int i, char c) {
	(void)i; // Avoid unused parameter warning
	return (char)toupper((unsigned char)c);
}

char	add_index(unsigned int i, char c) {
	return (c + i);
}

char	replace_vowels(unsigned int i, char c) {
	(void)i; // Avoid unused parameter warning
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		return ('*');
	return (c);
}

int	main(void) {
	char *result;

	// Test Case 1: Empty string
	result = ft_strmapi("", identity);
	printf("Test 1 (Empty string): %s\n", result);
	free(result);

	// Test Case 2: NULL string
	result = ft_strmapi(NULL, identity);
	printf("Test 2 (NULL string): %s\n", result == NULL ? "NULL" : result);

	// Test Case 3: NULL function pointer
	result = ft_strmapi("Hello", NULL);
	printf("Test 3 (NULL function): %s\n", result == NULL ? "NULL" : result);

	// Test Case 4: Identity function
	result = ft_strmapi("Hello", identity);
	printf("Test 4 (Identity function): %s\n", result);
	free(result);

	// Test Case 5: Uppercase conversion function
	result = ft_strmapi("Hello, World!", to_upper);
	printf("Test 5 (Uppercase function): %s\n", result);
	free(result);

	// Test Case 6: Index-dependent modification
	result = ft_strmapi("abcd", add_index);
	printf("Test 6 (Add index to each char): %s\n", result);
	free(result);

	// Test Case 7: Replace vowels with '*'
	result = ft_strmapi("Hello, World!", replace_vowels);
	printf("Test 7 (Replace vowels): %s\n", result);
	free(result);

	// Test Case 8: String with non-printable characters
	char non_printable[] = { 'H', 'e', '\t', 'l', 'o', '\n', 'W', 'o', 'r', 'l',
		'd', '!', '\0' };
	result = ft_strmapi(non_printable, identity);
	printf("Test 8 (Non-printable chars): %s\n", result);
	free(result);

	return (0);
}
*/