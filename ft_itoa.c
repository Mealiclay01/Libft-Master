/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:01 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:24:54 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_digit(long num)
{
	int	cur;

	cur = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		cur++;
	while (num != 0)
	{
		num = num / 10;
		cur++;
	}
	return (cur);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nl;
	char	*result;

	len = num_digit(n);
	nl = (long) n;
	if (n < 0)
		nl *= -1;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = 0;
	if (nl == 0)
		result[0] = '0';
	else
	{
		while (len--, nl != 0)
		{
			result[len] = (nl % 10) + '0';
			nl = (nl - (nl % 10)) / 10;
		}
		if (n < 0)
			result[len] = '-';
	}
	return (result);
}
//------------test: ft_itoa-------------------------
/*
#include <limits.h>
#include <stdio.h>

int	main(void) {
	char *result;

	result = ft_itoa(0);
	printf("ft_itoa(0) = %s\n", result);
	free(result);

	result = ft_itoa(123);
	printf("ft_itoa(123) = %s\n", result);
	free(result);

	result = ft_itoa(-456);
	printf("ft_itoa(-456) = %s\n", result);
	free(result);

	result = ft_itoa(INT_MAX);
	printf("ft_itoa(INT_MAX) = %s\n", result);
	free(result);

	result = ft_itoa(INT_MIN);
	printf("ft_itoa(INT_MIN) = %s\n", result);
	free(result);

	// Simulate malloc failure (might not be reliable)
	result = ft_itoa(789);
	printf("ft_itoa(789) with malloc failure = %s\n",
		(result == NULL) ? "NULL" : result);
	free(result);

	return (0);
}
*/

// len = 3 && nl = 123
// result[2] = (123 % 10) + '0' = 3 + '0' = '3'
// nl = (123 - 3) / 10 = 12
// len = 2
// len = 1
