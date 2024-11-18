/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:32:45 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:17:02 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	cur;
	int	num;
	int	sign;

	cur = 0;
	num = 0;
	sign = 1;
	while ((str[cur] >= 9 && str[cur] <= 13) || str[cur] == ' ')
		cur++;
	if (str[cur] == '+' || str[cur] == '-')
	{
		if (str[cur] == '-')
			sign = -1;
		cur++;
	}
	while (str[cur] >= '0' && str[cur] <= '9')
	{
		num = num * 10 + str[cur] - '0';
		cur++;
	}
	return (num * sign);
}

// -------------------Tests the ft_atoi function-------------------
/*
#include <stdio.h>

 #include <stdlib.h>
int	main(void) {
	char *str = " 9723948534545245245   ";
	int a;
	int result = ft_atoi(str);
	a = atoi(str);
	printf("ft_atoi: %d\n", result);
	printf("atoi: %d\n", a);
	int val;
	char *sttr;
	str = "    -150ll9.10E";
	printf("mine  = %d\n", ft_atoi(sttr));
   printf("lib   = %d\n", atoi(sttr));
}
*/