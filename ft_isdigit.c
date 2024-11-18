/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:33:41 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:17:18 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
//----------------------test: ft_isdigit--------------------------
/*
#include <stdio.h>

int	main(void) {
	// Test cases
	printf("ft_isdigit('0') = %d\n", ft_isdigit('0')); // Expected: 1 (true)
	printf("ft_isdigit('5') = %d\n", ft_isdigit('5')); // Expected: 1 (true)
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9')); // Expected: 1 (true)
	printf("ft_isdigit('a') = %d\n", ft_isdigit('a')); // Expected: 0 (false)
	printf("ft_isdigit('/') = %d\n", ft_isdigit('/')); // Expected: 0 (false)
	printf("ft_isdigit(':') = %d\n", ft_isdigit(':')); // Expected: 0 (false)
	printf("ft_isdigit(' ') = %d\n", ft_isdigit(' ')); // Expected: 0 (false)

	return (0);
}
*/