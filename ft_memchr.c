/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:05 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:17:38 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char const	*data;

	i = 0;
	data = (unsigned char const *)s;
	while (i < n)
	{
		if (data[i] == (unsigned char)c)
			return ((void *)(data + i));
		i++;
	}
	return (NULL);
}
//--------------------test: ft_memchr----------------------------------
/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char str[] = "This is a test string.";
	char *result;


	result = ft_memchr(str, 'i', strlen(str));
	printf("ft_memchr(str, 'i', strlen(str)) = %s\n", result);
		// Expected: "is is a test string."

	result = ft_memchr(str, 'z', strlen(str));
	printf("ft_memchr(str, 'z', strlen(str)) = %s\n",
		result ? result : "NULL");  // Expected: NULL

	result = ft_memchr(str, 's', 5);
	printf("ft_memchr(str, 's', 5) = %s\n", result ? result : "NULL");
		// Expected: "s is a test string."

	result = ft_memchr(str, 'T', 1);
	printf("ft_memchr(str, 'T', 1) = %s\n", result);
		// Expected: "This is a test string."

	result = ft_memchr(str, '\0', strlen(str) + 1);
	printf("ft_memchr(str, '\\0', strlen(str) + 1) = %s\n", result);
		// Expected: "" (empty string)

	result = ft_memchr(str, 't', 0);
	printf("ft_memchr(str, 't', 0) = %s\n", result ? result : "NULL");
		// Expected: NULL (searching 0 bytes)

	return (0);
}
*/