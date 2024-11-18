/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/14 17:18:24 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the last occurrence of 'c' in the string 's'.
** Returns a pointer to the located character, or NULL if not found.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

//-------------test: ft_strrchr--------------------
/*
#include <stdio.h>
#include <string.h>

 int main()
{
		const char *c = "hleolo";
	char	*result;

		result = ft_strchr(c, 'l');
		printf("lib :      %s\n", strrchr(c, 'e'));
		printf("libmin :      %s\n", ft_strrchr(c, 'e'));
		printf("mine :     %s\n", ft_strchr(c, '\0'));
}
*/