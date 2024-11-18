/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:33:37 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:17:16 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
//------------Test:ft_isascii------------------------
/*
#include <ctype.h>
#include <stdio.h>

int	main(void) {
	int c1 = 65;   // 'A' (ASCII)
	int c2 = 127;  // DEL (ASCII)
	int c3 = 128;  // Out of ASCII range
	int c4 = -1;   // Out of ASCII range

	printf("Is %d ASCII? %d\n", c1, ft_isascii(c1)); // Should print 1
	printf("Is %d ASCII? %d\n", c2, ft_isascii(c2)); // Should print 1
	printf("Is %d ASCII? %d\n", c3, ft_isascii(c3)); // Should print 0
	printf("Is %d ASCII? %d\n", c4, ft_isascii(c4)); // Should print 0

	return (0);
}
*/