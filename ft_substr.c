/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:28 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_substr - Extracts a substring from `s`
  starting at `start` with length `len`
 *
 * @s: The source string.
 * @start: The start index.
 * @len: The length of the substring.
 *
 * Returns: A new substring or NULL if allocation fails.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}
//----------test : ft_substr--------------------
/*
 #include <stdio.h>
 #include <stdlib.h>
 int main() {
		char *result;
		result = ft_substr("Hello, World!", 5, 15);
		printf("Result : \"%s\"\n", result);
		return (0);
 }
 */