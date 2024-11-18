/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:32:53 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:17:07 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*data;

	i = 0;
	data = (char *)s;
	while (i < n)
	{
		data[i] = 0;
		i++;
	}
}
// ---------------- Test ft_bzero-----------------------
/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char str[10] = "abcdefghi";

	// Test case 1: Zero out the entire string
	ft_bzero(str, 10);
	printf("Test 1: %s\n", str); // Expected output: "" (empty string)

	// Test case 2: Zero out part of the string
	strcpy(str, "abcdefghi");
	ft_bzero(str + 2, 5);
	printf("Test 2: %s\n", str); // Expected output: "ab00000hi"

	// Test case 3: Zero out zero bytes (should do nothing)
	strcpy(str, "abcdefghi");
	ft_bzero(str, 0);
	printf("Test 3: %s\n", str); // Expected output: "abcdefghi"
	return (0);
}
*/