/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:17 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cur;

	cur = 0;
	while (s[cur])
		cur++;
	return (cur);
}
//--------------------------test: ft_strlen-------------------------------------
/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	// Test case 1: Empty string
	char *str1 = "";
	printf("Test case 1: %zu\n", ft_strlen(str1));

	// Test case 2: Regular string
	char *str2 = "Hello, world!";
	printf("Test case 2: %zu\n", ft_strlen(str2));

	// Test case 3: String with special characters
	char *str3 = "\t\n!@#$%^&*()_+-=[]{};':\"\\|,.<>/?";
	printf("Test case 3: %zu\n", ft_strlen(str3));

	// Test case 4: Long string
	char str4[10000];
	for (int i = 0; i < 9999; i++) {
		str4[i] = 'a';
	}
	str4[9999] = '\0';
	printf("Test case 4: %zu\n", ft_strlen(str4));

	return (0);
}
*/