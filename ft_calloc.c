/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:33:02 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 03:53:02 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size * count));
	return (ptr);
}
// ---------------- test: ft_calloc----------------------------
/*
#include <limits.h>  // For SIZE_MAX
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // For memset

int	main(void) {
	// Test 1: Normal case
	printf("Test 1: Normal case\n");
	int *arr = ft_calloc(5, sizeof(int));
	if (arr) {
		for (int i = 0; i < 5; i++) {
			printf("%d ", arr[i]);  // Should print 0, 0, 0, 0, 0
		}
		printf("\n");
		free(arr);
	} else {
		printf("Memory allocation failed\n");
	}

	// Test 2: Zero count (ft_calloc should return NULL)
	printf("\nTest 2: Zero count\n");
	arr = ft_calloc(0, sizeof(int));
	if (arr) {
		printf("Unexpected allocation success\n");
		free(arr);
	} else {
		printf("Memory allocation returned NULL as expected\n");
	}

	// Test 3: Zero size (ft_calloc should return NULL)
	printf("\nTest 3: Zero size\n");
	arr = ft_calloc(5, 0);
	if (arr) {
		printf("Unexpected allocation success\n");
		free(arr);
	} else {
		printf("Memory allocation returned NULL as expected\n");
	}

	// Test 4: Large allocation (check if the allocation works)
	printf("\nTest 5: Large allocation\n");
	arr = ft_calloc(100000000, sizeof(int));  // Very large allocation
	if (arr) {
		printf("Allocation succeeded\n");
		free(arr);
	} else {
		printf("Memory allocation failed\n");
	}

	// Test 5: Compare ft_calloc with standard calloc
	printf("\nTest 6: Compare ft_calloc with standard calloc\n");
	int *arr_ft = ft_calloc(10, sizeof(int));
	int *arr_std = calloc(10, sizeof(int));

	// Compare memory content (they should both be zeroed out)
	int is_equal = 1;
	for (int i = 0; i < 10; i++) {
		if (arr_ft[i] != arr_std[i]) {
			is_equal = 0;
			break ;
		}
	}

	if (is_equal) {
		printf("ft_calloc and standard calloc produced the same result\n");
	} else {
		printf("ft_calloc and standard calloc produced different results\n");
	}

	free(arr_ft);
	free(arr_std);

	return (0);
}
*/