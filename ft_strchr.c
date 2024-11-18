/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:56:19 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (0);
}
//------------------test: ft_strchr--------------------------
/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char *str;
	char *result;
	int c;

	// Test case 1: Character found in the middle
	str = "Hello world!";
	c = 'o';
	printf("Test case 1: \"%s\", '%c' -> ", str, c);
	result = ft_strchr(str, c);
	printf("%s\n", result);

	// Test case 2: Character found at the beginning
	str = "Hello world!";
	c = 'H';
	printf("Test case 2: \"%s\", '%c' -> ", str, c);
	result = ft_strchr(str, c);
	printf("%s\n", result);

	// Test case 3: Character found at the end
	str = "Hello world!";
	c = '!';
	printf("Test case 3: \"%s\", '%c' -> ", str, c);
	result = ft_strchr(str, c);
	printf("%s\n", result);

	// Test case 4: Character not found
	str = "Hello world!";
	c = 'z';
	printf("Test case 4: \"%s\", '%c' -> ", str, c);
	result = ft_strchr(str, c);
	printf("%s\n", result ? result : "(null)");

	// Test case 5: Searching for null terminator
	str = "Hello world!";
	c = '\0';
	printf("Test case 5: \"%s\", '\\0' -> ", str);
	result = ft_strchr(str, c);
	printf("%s\n", result);

	// Test case 6: Empty string
	str = "";
	c = 'a';
	printf("Test case 6: \"%s\", '%c' -> ", str, c);
	result = ft_strchr(str, c);
	printf("%s\n", result ? result : "(null)");

	return (0);
}
*/