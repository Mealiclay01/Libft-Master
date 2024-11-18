/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:20 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:44:30 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = d;
	src = (const unsigned char *)s;
	if (dest < src)
		ft_memcpy(dest, src, n);
	if (dest >= src)
	{
		while (n--)
		{
			dest[n] = src[n];
		}
	}
	return (d);
}
/*
the beginning (if dst is before src) or from the end (if dst is after src)
*/
//---------test: ft_memmove------------------
/*
#include <stdio.h>
#include <string.h>

// Helper function to print memory contents as characters
void	print_memory(const unsigned char *mem, size_t len) {
	for (size_t i = 0; i < len; i++) {
		printf("%c", mem[i]);
	}
	printf("\n");
}
#include <stdio.h>

int	main(void)
{
	char	src1[] = "Hello, World!";
	char	dst1[20];
	char	overlap_src[] = "Overlap Test";
	char	overlap_src2[] = "Overlap Test";
	char	src4[] = "No Copy";
	char	dst4[20] = "Existing Data";
	char	src5[] = "Source";
	char	dst6[20];

	// Test 1: Standard copy, no overlap
	ft_memmove(dst1, src1, strlen(src1) + 1);
	printf("Test 1 - Standard copy (no overlap):\n");
	printf("Source: %s\n", src1);
	printf("Destination: %s\n\n", dst1);
	// Test 2: Overlapping memory where dst > src (reverse copy)
	printf("Test 2 - Overlap where dst > src:\n");
	ft_memmove(overlap_src + 4, overlap_src, 7); 
		// Move "Overlap" within itself
	print_memory((unsigned char *)overlap_src, strlen(overlap_src) + 1);
	// Test 3: Overlapping memory where dst < src (forward copy)
	printf("Test 3 - Overlap where dst < src:\n");
	ft_memmove(overlap_src2, overlap_src2 + 4, 7);
	print_memory((unsigned char *)overlap_src2, strlen(overlap_src2) + 1);
	// Test 4: Copy with len = 0 (should do nothing)
	printf("Test 4 - Copy with len = 0:\n");
	ft_memmove(dst4, src4, 0);  // No operation
	printf("Destination (should remain unchanged): %s\n\n", dst4);
	// Test 5: NULL as dst (should return NULL and not crash)
	printf("Test 5 - NULL destination:\n");
	if (ft_memmove(NULL, src5, 5) == NULL) {
		printf("Passed: NULL destination check\n\n");
	}
	// Test 6: NULL as src (should return NULL and not crash)
	printf("Test 6 - NULL source:\n");
	if (ft_memmove(dst6, NULL, 5) == NULL) {
		printf("Passed: NULL source check\n\n");
	}
	// Test 7: Both dst and src as NULL (should return NULL and not crash)
	printf("Test 7 - Both NULL:\n");
	if (ft_memmove(NULL, NULL, 5) == NULL) {
		printf("Passed: Both NULL check\n\n");
	}
	return (0);
}
*/