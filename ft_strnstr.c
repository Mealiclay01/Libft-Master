/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:22 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurrence of 'needle' in 'haystack',
** where not more than 'len' characters are searched.
** Similar to strstr, but with a size limit.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cur1;
	size_t	cur2;
	size_t	needle_len;

	if (!needle[0])
		return ((char *)haystack);
	cur1 = 0;
	needle_len = ft_strlen(needle);
	while (haystack[cur1] && (cur1 + needle_len - 1) < len)
	{
		cur2 = 0;
		while (needle[cur2] && haystack[cur1 + cur2] == needle[cur2])
		{
			if (cur2 == needle_len - 1)
				return ((char *)(haystack + cur1));
			cur2++;
		}
		cur1++;
	}
	return (0);
}
//-----------test: ft_strnstr--------------
/*
#include <stdio.h>
#include <string.h>

 int main()
 {
		// Take any two strings
	char s1[] = "GeeksforGeeks";
		char s2[] = "for";
		char* p;

		// Find first occurrence of s2 in s1
		p = ft_strnstr(s1, s2, 9);

		// Prints the result
		if (p) {
			printf("String found\n");
			printf("First occurrence of string '%s' in '%s' is "
				"'%s'\n",s2, s1, p);
		}
		else
			printf("String not found\n");

	return (0);
 }
 */