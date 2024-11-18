/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:11 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 03:46:57 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*d1;
	const unsigned char	*d2;

	if (n == 0)
		return (0);
	i = 0;
	d1 = (const unsigned char *)s1;
	d2 = (const unsigned char *)s2;
	while (n--)
	{
		if (d1[i] != d2[i])
			return ((unsigned char)d1[i] - (unsigned char)d2[i]);
		i++;
	}
	return (0);
}
//---------test: ft_memcmp-------------
/*
 #include <stdio.h>
 #include <string.h>
 int main()
 {
	printf("lib :%d\n",ft_memcmp("hel","hell",10));
	printf("min :%d\n",memcmp("hel","hell",10));
}
*/
