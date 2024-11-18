/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 03:54:27 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
//---------------test: ft_putnbr--------------
/*
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	// Testing positive numbers
	ft_putnbr_fd(42, 1);  // Expected: 42
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(123456, 1);  // Expected: 123456
	ft_putchar_fd('\n', 1);
	// Testing negative numbers
	ft_putnbr_fd(-42, 1);  // Expected: -42
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-123456, 1);  // Expected: -123456
	ft_putchar_fd('\n', 1);
	// Testing the edge case INT_MIN
	ft_putnbr_fd(INT_MIN, 1);  // Expected: -2147483648
	ft_putchar_fd('\n', 1);
	// Testing the edge case INT_MAX
	ft_putnbr_fd(INT_MAX, 1);  // Expected: 2147483647
	ft_putchar_fd('\n', 1);
	// Testing zero
	ft_putnbr_fd(0, 1);  // Expected: 0
	ft_putchar_fd('\n', 1);
	// Writes a newline to standard output
		fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
	ft_putnbr_fd(0, fd); // Writes a newline to standard output
	ft_putchar_fd('\n', 1);
	return (0);
}
*/