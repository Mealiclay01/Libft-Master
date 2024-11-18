/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:55:18 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** This function splits a string 's' into an array of substrings using
** the character 'c' as a delimiter.
**
** It works by:
**  1. Counting the number of words in the string using 'word_count'.
**  2. Allocating memory for an array of strings to hold the substrings.
**  3. Filling the array with the substrings using 'fill_split'.
**
** Parameters:
**  s: The string to be split.
**  c: The delimiter character.
**
** Return value:
**  A pointer to an array of strings (char **), where each element is a
**  substring from 's'. The last element of the array is NULL.
**  Returns NULL if the input string is NULL or if memory allocation fails.
*/
static size_t	word_count(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	*word_alloc(const char *str, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **sp, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(sp[i]);
		i++;
	}
	free(sp);
}

static char	**fill_split(const char *s, char c, char **sp)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			sp[i] = word_alloc(s, c);
			if (!sp[i])
			{
				free_all(sp, i);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	sp[i] = NULL;
	return (sp);
}

char	**ft_split(char const *s, char c)
{
	char	**sp;

	if (!s)
		return (NULL);
	sp = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!sp)
		return (NULL);
	return (fill_split(s, c, sp));
}
//------------------test: ft_split-------------------------
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_result(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		printf("'%s' ", result[i]);
		i++;
	}
	printf("\n");
}

int	main(void) {
	char **result;
	int i;

	// Test case 1: Basic string
	char *str1 = "Hello world!";
	char c1 = ' ';
	printf("Test case 1: \"%s\", '%c' -> ", str1, c1);
	result = ft_split(str1, c1);
	print_result(result);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	// Test case 2: Multiple delimiters
	char *str2 = "  Hello  world!  ";
	char c2 = ' ';
	printf("Test case 2: \"%s\", '%c' -> ", str2, c2);
	result = ft_split(str2, c2);
	print_result(result);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	// Test case 3: Delimiter at the beginning and end
	char *str3 = " Hello world! ";
	char c3 = ' ';
	printf("Test case 3: \"%s\", '%c' -> ", str3, c3);
	result = ft_split(str3, c3);
	print_result(result);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	// Test case 4: No delimiters
	char *str4 = "Helloworld!";
	char c4 = ' ';
	printf("Test case 4: \"%s\", '%c' -> ", str4, c4);
	result = ft_split(str4, c4);
	print_result(result);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	// Test case 5: Empty string
	char *str5 = "";
	char c5 = ' ';
	printf("Test case 5: \"%s\", '%c' -> ", str5, c5);
	result = ft_split(str5, c5);
	print_result(result);
	free(result);

	// Test case 6: Only delimiters
	char *str6 = "   ";
	char c6 = ' ';
	printf("Test case 6: \"%s\", '%c' -> ", str6, c6);
	result = ft_split(str6, c6);
	print_result(result);
	free(result);

	// Test case 7: Consecutive delimiters
	char *str7 = "Hello,,world!";
	char c7 = ',';
	printf("Test case 7: \"%s\", '%c' -> ", str7, c7);
	result = ft_split(str7, c7);
	print_result(result);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	// Test case 8: Long string with many words
	char *str8 = "This is a very string.";
	char c8 = ' ';
	printf("Test case 8: \"%s\", '%c' -> ", str8, c8);
	result = ft_split(str8, c8);
	print_result(result);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	// Test case 9: String with special characters
	char *str9 = "This!@#$%^&*<>? string has special characters.";
	char c9 = ' ';
	printf("Test case 9: \"%s\", '%c' -> ", str9, c9);
	result = ft_split(str9, c9);
	print_result(result);
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);

	return (0);
}
*/