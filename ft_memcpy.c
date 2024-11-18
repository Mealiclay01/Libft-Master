/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:16 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 03:50:35 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cur;
	char	*dst_data;
	char	*src_data;

	if (!src && !dst)
		return (NULL);
	cur = 0;
	dst_data = (char *)dst;
	src_data = (char *)src;
	while (cur < n)
	{
		dst_data[cur] = src_data[cur];
		cur++;
	}
	return (dst_data);
}
//------------test: ft_memcpy-------------
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    // 1. Normal case
    char src1[] = "Hello, world!";
    char dst1[20];
    ft_memcpy(dst1, src1, strlen(src1) + 1);
    printf("Normal case: %s\n", dst1);

    // 2. Zero bytes
    char dst2[20] = "initial";
    ft_memcpy(dst2, src1, 0);
    printf("Zero bytes: %s\n", dst2);  // Should print "initial"

    // 3. Null pointers
    if (ft_memcpy(NULL, NULL, 5) == NULL) {
        printf("Null pointers: Passed\n");
    } else {
        printf("Null pointers: Failed\n");
    }

    // 4. Overlapping buffers
    char src3[] = "Overlap test";
    ft_memcpy(src3 + 3, src3, 5);
    printf("Overlapping buffers: %s\n", src3);  // Behavior may be undefined

    // 5. Large buffer
    char *src4 = (char *)malloc(1000000 * sizeof(char));
    char *dst4 = (char *)malloc(1000000 * sizeof(char));
    if (src4 && dst4) {
        memset(src4, 'A', 1000000);
        ft_memcpy(dst4, src4, 1000000);
        printf("Large buffer: %c\n", dst4[999999]);  // Should print 'A'
    }
    free(src4);
    free(dst4);

    return 0;
}
*/