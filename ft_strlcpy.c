/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:58:38 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Copies 'src' to 'dst' with a size limit, preventing buffer overflow.
** Returns the length of 'src', allowing truncation detection.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cur;

	if (size == 0)
		return (ft_strlen(src));
	cur = 0;
	while (src[cur] && cur < (size - 1))
	{
		dst[cur] = src[cur];
		cur++;
	}
	dst[cur] = 0;
	return (ft_strlen(src));
}
//-------------test: ft_strlcpy---------------------
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*src;
	size_t	result;

	char dst[20]; // Ensure it's large enough for your tests
	// Test case 1
	src = "Hello, World!";
	result = ft_strlcpy(dst, src, sizeof(dst));
	printf("Test 1: Before call, dst = '%s'\n", dst);
		// Should be empty before call
	printf("Test 1: After call, dst = '%s', Length of src = %zu\n", dst,
		result);
	// Test case 2
	result = ft_strlcpy(dst, src, 14);
	printf("Test 2: Before call, dst = '%s'\n", dst);
		// Should be empty before call
	printf("Test 2: After call, dst = '%s', Length of src = %zu\n", dst,
		result);
	// Test case 3
	result = ft_strlcpy(dst, src, 6);
	printf("Test 3: Before call, dst = '%s'\n", dst);
		// Should be empty before call
	printf("Test 3: After call, dst = '%s', Length of src = %zu\n", dst,
		result);
	// Test case 4
	result = ft_strlcpy(dst, src, 0);
	printf("Test 4: Before call, dst = '%s'\n", dst);
		// Should be empty before call
	printf("Test 4: After call, dst = '%s', Length of src = %zu\n", dst,
		result);
	// Test case 5
	result = ft_strlcpy(dst, "Short", sizeof(dst));
	printf("Test 5: Before call, dst = '%s'\n", dst);
		// Should be empty before call
	printf("Test 5: After call, dst = '%s', Length of src = %zu\n", dst,
		result);
	// Test case 6
	result = ft_strlcpy(dst, "LongerString", 6);
	printf("Test 6: Before call, dst = '%s'\n", dst);
		// Should be empty before call
	printf("Test 6: After call, dst = '%s', Length of src = %zu\n", dst,
		result);
	return (0);
}
*/