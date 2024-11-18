/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:57:55 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * ft_strlcat - Appends `src` to `dst` ensuring the total length does not exceed
 * `dstsize - 1`, and null-terminates the result.
 *
 * @dst: The destination string.
 * @src: The source string.
 * @dstsize: The size of the destination buffer.
 *
 * Returns: The total length of the string that would have been created.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	cur;

	src_len = ft_strlen(dst);
	cur = 0;
	if (dstsize <= src_len)
		return (ft_strlen(src) + dstsize);
	while (src[cur] && (src_len + cur) < (dstsize - 1))
	{
		dst[src_len + cur] = src[cur];
		cur++;
	}
	dst[src_len + cur] = 0;
	return (ft_strlen(src) + src_len);
}
//---------------test: ft_strlcat-------------------
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	buffer[20];
	char	*result;
	size_t	len;

	// Test case 1: Both strings fit in the buffer
	snprintf(buffer, sizeof(buffer), "Hello");
	result = buffer;
	len = ft_strlcat(result, "World", sizeof(buffer));
	printf("Test 1: Result = '%s', Length = %zu\n", result, len);
		// Expected: "HelloWorld", Length = 10
	// Test case 2: `dst` is full, `dstsize` is exactly the size of the buffer
	snprintf(buffer, sizeof(buffer), "Hello");
	result = buffer;
	len = ft_strlcat(result, "World", sizeof(buffer));
	printf("Test 2: Result = '%s', Length = %zu\n", result, len);
		// Expected: "HelloWorld", Length = 10
	// Test case 3: `dstsize` is smaller than the current size of `dst`
	snprintf(buffer, sizeof(buffer), "Hello");
	result = buffer;
	len = ft_strlcat(result, "World", 5);
		// `dstsize` is too small to fit any characters from `src`
	printf("Test 3: Result = '%s', Length = %zu\n", result, len);
		// Expected: "Hello", Length = 10
	// Test case 4: `src` is an empty string
	snprintf(buffer, sizeof(buffer), "Hello");
	result = buffer;
	len = ft_strlcat(result, "", sizeof(buffer));
	printf("Test 4: Result = '%s', Length = %zu\n", result, len);
		// Expected: "Hello", Length = 5
	// Test case 5: `dst` is empty and `dstsize` is sufficient to hold `src`
	snprintf(buffer, sizeof(buffer), "");
	result = buffer;
	len = ft_strlcat(result, "World", sizeof(buffer));
	printf("Test 5: Result = '%s', Length = %zu\n", result, len);
		// Expected: "World", Length = 5
	// Test case 6: `dstsize` is too small to fit any characters
	snprintf(buffer, sizeof(buffer), "Hello");
	result = buffer;
	len = ft_strlcat(result, "World", 5);
		// Not enough space to append anything
	printf("Test 6: Result = '%s', Length = %zu\n", result, len);
		// Expected: "Hello", Length = 10
	return (0);
}
*/