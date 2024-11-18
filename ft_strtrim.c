/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:26 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strtrim - Removes characters from the beginning and end of `s1` that
 * are present in `set`.
 *
 * @s1: The string to trim.
 * @set: The set of characters to remove.
 *
 * Returns: A new string with the trimmed result,
 * or NULL if memory allocation fails.
 */

static int	s_check(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		len;
	char	*ptr;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 && !set)
		return (NULL);
	while (s1[start] && s_check(set, s1[start]))
		start++;
	while (start < end && s_check(set, s1[end - 1]))
		end--;
	len = end - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (end > start)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
//--------------test : ft_strtrim---------------
/*
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

 char *ft_strtrim(char const *s1, char const *set);

 int main() {
		// Test case 1
		char *result1 = ft_strtrim("   Hello, World!aaaaabeeee   ", "  ");
		printf("Result 1: '%s'\n", result1);
		free(result1);

		// Test case 2
		char *result2 = ft_strtrim("-Hello, World!-", "-");
		printf("Result 2: '%s'\n", result2);
		free(result2);

		// Test case 3
		char *result3 = ft_strtrim("!!!Welcome!!!", "!");
		printf("Result 3: '%s'\n", result3);
		free(result3);

		// Test case 4
		char *result4 = ft_strtrim("   A B C   ", " ");
	printf("Result 4: '%s'\n", result4);
		free(result4);

		// Test case 5
		char *result5 = ft_strtrim("XYZHelloXYZ", "XYZ");
		printf("Result 5: '%s'\n", result5);
		free(result5);

		// Test case 6
		char *result6 = ft_strtrim("No trimming needed", " ");
		printf("Result 6: '%s'\n", result6);
		free(result6);

 return (0);
}
*/