/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:33:46 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/12 13:15:48 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}
//-----------------------test: ft_isprint----------------------------
/*
#include <stdio.h>

int	main(void) {
	// Test cases covering the printable ASCII range and boundaries
	printf("ft_isprint(31) = %d\n", ft_isprint(31));  // Expected: 0 (false)
		- Just below printable range
	printf("ft_isprint(32) = %d\n", ft_isprint(32));  // Expected: 1 (true)
		- Space
	printf("ft_isprint('A') = %d\n", ft_isprint('A')); // Expected: 1 (true)
		- Uppercase letter
	printf("ft_isprint('z') = %d\n", ft_isprint('z')); // Expected: 1 (true)
		- Lowercase letter
	printf("ft_isprint('5') = %d\n", ft_isprint('5')); // Expected: 1 (true)
		- Digit
	printf("ft_isprint('~') = %d\n", ft_isprint('~')); // Expected: 1 (true)
		- Tilde (126)
	printf("ft_isprint(127) = %d\n", ft_isprint(127)); // Expected: 0 (false)
		- Just above printable range
	printf("ft_isprint(0) = %d\n", ft_isprint(0));    // Expected: 0 (false)
		- Control character
	printf("ft_isprint(128) = %d\n", ft_isprint(128));  // Expected: 0 (false)
		- Outside printable range

	return (0);
}
*/