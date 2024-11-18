/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:30 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:54:30 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*data;

	i = 0;
	data = (char *)b;
	while (i < len)
	{
		data[i] = c;
		i++;
	}
	return (b);
}
//--------------------test: ft_memset-----------------------
/*
#include <stdio.h>
#include <string.h>

 int main() {
		char buffer[50] = "";
		ft_memset(buffer + 13, '.', 7);
			printf("Buffer mine: %s\n", buffer);
		char buffer2[50] = "";
		memset(buffer2 + 13, '.', 7);
		printf("Buffer lib : %s\n", buffer2);
	int n = 20000;
	//ft_memset(&n, 0, 4);
	ft_memset(&n, 42, 1);
	printf("%d\n", n);
}
*/