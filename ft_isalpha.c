/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:33:20 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:17:14 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
//-------------Test:ft_isalpha-------------------
/*
#include <stdio.h>

int	main(void) {
	char c1 = 'Z';
	char c2 = 'g';
	char c3 = '$';

	printf("Is %c alphabetic? %d\n", c1, ft_isalpha(c1)); // Should print 1
	printf("Is %c alphabetic? %d\n", c2, ft_isalpha(c2)); // Should print 1
	printf("Is %c alphabetic? %d\n", c3, ft_isalpha(c3)); // Should print 0

	return (0);
}
*/