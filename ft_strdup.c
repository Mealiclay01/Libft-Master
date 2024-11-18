/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 03:52:05 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** This function creates a duplicate of a given string s1.
** It allocates memory for the duplicate string, copies the contents of
** s1 to the duplicate, and returns a pointer to the duplicate.
**
** Parameters:
**  s1: The string to be duplicated.
**
** Return value:
**  A pointer to the duplicated string.
**  Returns NULL if the input string is NULL or if memory allocation fails.
*/
char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*dup;

	s1_len = ft_strlen(s1);
	dup = (char *)malloc((s1_len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	dup[s1_len] = 0;
	while (--s1_len >= 0)
		dup[s1_len] = s1[s1_len];
	return (dup);
}

//---------------test: ft_strdup----------------------

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*dup;

	// Test case 1: Basic string
	str = "Hello, world!";
	printf("Test case 1: \"%s\" -> ", str);
	dup = ft_strdup(str);
	printf("\"%s\"\n", dup);
	free(dup);
	// Test case 2: Empty string
	str = "";
	printf("Test case 2: \"%s\" -> ", str);
	dup = ft_strdup(str);
	printf("\"%s\"\n", dup);
	free(dup);
	// Test case 3: String with special characters
	str = "This string has \t\n special \\ characters!";
	printf("Test case 3: \"%s\" -> ", str);
	dup = ft_strdup(str);
	printf("\"%s\"\n", dup);
	free(dup);
	// Test case 4: Long string
	str = "This is a very long string to test.";
	printf("Test case 4: \"%s\" -> ", str);
	dup = ft_strdup(str);
	printf("\"%s\"\n", dup);
	free(dup);
	return (0);
}
*/