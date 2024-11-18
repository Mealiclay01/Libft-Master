/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:33:11 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:17:12 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
//------------ Test: ft_isalnum-------------------------
/*
#include <stdio.h>

int	main(void) {
	char str[] = "A?1";

	for (int i = 0; str[i] != '\0'; i++) {
		printf("Is %c alphanumeric? %d\n", str[i], ft_isalnum(str[i]));
	}

	return (0);
}
*/