/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arhimi <arhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:34:36 by arhimi            #+#    #+#             */
/*   Updated: 2024/11/15 02:56:59 by arhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Iterates through the string 's' and applies the function 'f' to each character.
The function 'f' receives the index of the character and the character itself.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	cur;

	if (!s || !f)
		return ;
	cur = 0;
	while (s[cur])
	{
		(*f)(cur, &s[cur]);
		cur++;
	}
}

//------------------test ft_striterie---------------
/*
#include <stdio.h>

void	test_function(unsigned int i, char *c) {
	printf("Index: %u, Char: %c\n", i, *c);
}

int	main(void) {
	// Test 1: Normal string
	char str1[] = "Hello";
	printf("Test 1: Normal string\n");
	ft_striteri(str1, test_function);
		// Expected: it will print index and char for each character

	// Test 2: Empty string
	char str2[] = "";
	printf("\nTest 2: Empty string\n");
	ft_striteri(str2, test_function);  // Expected: nothing should be printed

	// Test 3: Null string (s = NULL)
	char *str3 = NULL;
	printf("\nTest 3: Null string\n");
	ft_striteri(str3, test_function);  // Expected: nothing should happen

	// Test 4: Null function pointer (f = NULL)
	char str4[] = "Test";
	printf("\nTest 4: Null function pointer\n");
	ft_striteri(str4, NULL);  // Expected: nothing should happen

	// Test 5: String with one character
	char str5[] = "A";
	printf("\nTest 5: String with one character\n");
	ft_striteri(str5, test_function);
		// Expected: it will print index 0 and char 'A'

	// Test 6: String with special characters
	char str6[] = "!@#";
	printf("\nTest 6: String with special characters\n");
	ft_striteri(str6, test_function);
		// Expected: it will print index and char for each character

	// Test 7: String with numbers
	char str7[] = "12345";
	printf("\nTest 7: String with numbers\n");
	ft_striteri(str7, test_function);
		// Expected: it will print index and char for each number

	return (0);
}
*/