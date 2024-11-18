/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:11 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** This function concatenates two strings, s1 and s2, into a new string.
** It allocates memory for the new string, copies the contents of s1
** followed by the contents of s2, and returns a pointer to the new string.
**
** Parameters:
**  s1: The first string.
**  s2: The second string.
**
** Return value:
**  A pointer to the new concatenated string.
**  Returns NULL if either of the input strings is NULL or if memory
**  allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (str);
}

//--------------------test: ft_strjoin--------------------------
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*result;

	// Test case 1: Both strings are non-empty
	result = ft_strjoin("Hello", "World");
	if (result) {
		printf("Test 1: %s\n", result);  // Expected: HelloWorld
		free(result);
	} else {
		printf("Test 1: NULL\n");
	}
	// Test case 2: First string is empty
	result = ft_strjoin("", "World");
	if (result) {
		printf("Test 2: %s\n", result);  // Expected: World
		free(result);
	} else {
		printf("Test 2: NULL\n");
	}
	// Test case 3: Second string is empty
	result = ft_strjoin("Hello", "");
	if (result) {
		printf("Test 3: %s\n", result);  // Expected: Hello
		free(result);
	} else {
		printf("Test 3: NULL\n");
	}
	// Test case 4: Both strings are empty
	result = ft_strjoin("", "");
	if (result) {
		printf("Test 4: %s\n", result);  // Expected: (empty string)
		free(result);
	} else {
		printf("Test 4: NULL\n");
	}
	// Test case 5: One string is NULL (this should handle the case safely)
	result = ft_strjoin(NULL, "World");
	if (result) {
		printf("Test 5: %s\n", result);
		free(result);
	} else {
		printf("Test 5: NULL\n");  // Expected: NULL
	}
	// Test case 6: The other string is NULL
	result = ft_strjoin("Hello", NULL);
	if (result) {
		printf("Test 6: %s\n", result);
		free(result);
	} else {
		printf("Test 6: NULL\n");  // Expected: NULL
	}
	return (0);
}
*/