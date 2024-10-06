/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:07:42 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:07:42 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	x;
	int	y;

	x = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[x] && x < len)
	{
		y = 0;
		while (big[x + y] == little[y] && little[y] != '\0' && x + y < len)
			y++;
		if (little[y] == '\0')
			return ((char *) (big + x));
		x++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// // Declaration of your ft_strnstr function
// /*
//  * Test the implementation of ft_strnstr.
//  * Normal, edge, and error cases are covered.
//  */

// void test_ft_strnstr()
// {
//     char *result;

//     /* Normal cases */
//     printf("Normal cases:\n");

//     // Case 1: Substring found at the beginning
//     char haystack1[] = "hello world";
//     char needle1[] = "hello";
//     result = ft_strnstr(haystack1, needle1, 11);
//     printf("Test 1 - Expected: 'hello world', Got: %s\n", result ? result : "(null)");

//     // Case 2: Substring found in the middle
//     char needle2[] = "world";
//     result = ft_strnstr(haystack1, needle2, 11);
//     printf("Test 2 - Expected: 'world', Got: %s\n", result ? result : "(null)");

//     // Case 3: Substring found near the end
//     char needle3[] = "rld";
//     result = ft_strnstr(haystack1, needle3, 11);
//     printf("Test 3 - Expected: 'rld', Got: %s\n", result ? result : "(null)");

//     // Case 4: Substring is empty (should return haystack)
//     result = ft_strnstr(haystack1, "", 11);
//     printf("Test 4 - Expected: 'hello world', Got: %s\n", result ? result : "(null)");

//     // Case 5: Substring not found
//     char needle5[] = "planet";
//     result = ft_strnstr(haystack1, needle5, 11);
//     printf("Test 5 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     /* Edge cases */
//     printf("\nEdge cases:\n");

//     // Case 6: Search length less than the length of needle
//     result = ft_strnstr(haystack1, "world", 3);
//     printf("Test 6 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 7: Search length exactly matches the needle
//     result = ft_strnstr(haystack1, "world", 5);
//     printf("Test 7 - Expected: 'world', Got: %s\n", result ? result : "(null)");

//     // Case 8: Needle found within search range
//     result = ft_strnstr(haystack1, "world", 11);
//     printf("Test 8 - Expected: 'world', Got: %s\n", result ? result : "(null)");

//     // Case 9: Search length larger than haystack
//     result = ft_strnstr(haystack1, "world", 20);
//     printf("Test 9 - Expected: 'world', Got: %s\n", result ? result : "(null)");

//     // Case 10: Searching for a single character needle
//     result = ft_strnstr(haystack1, "o", 11);
//     printf("Test 10 - Expected: 'o world', Got: %s\n", result ? result : "(null)");

//     /* Error cases */
//     printf("\nError cases:\n");

//     // Case 11: Empty haystack and empty needle (should return haystack)
//     result = ft_strnstr("", "", 0);
//     printf("Test 11 - Expected: '', Got: %s\n", result ? result : "(null)");

//     // Case 12: Empty haystack, non-empty needle (should return NULL)
//     result = ft_strnstr("", "test", 0);
//     printf("Test 12 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 13: Needle is longer than haystack
//     result = ft_strnstr("short", "longer", 10);
//     printf("Test 13 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 14: Search with special characters
//     char haystack2[] = "hello\nworld";
//     result = ft_strnstr(haystack2, "\nwo", 11);
//     printf("Test 14 - Expected: '\\nworld', Got: %s\n", result ? result : "(null)");

//     // Case 15: Case-sensitive search
//     result = ft_strnstr(haystack1, "Hello", 11);  // Should not find "Hello" due to case difference
//     printf("Test 15 - Expected: (null), Got: %s\n", result ? result : "(null)");
// }

// int main()
// {
//     test_ft_strnstr();
//     return 0;
// }
