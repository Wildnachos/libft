/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:05:35 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:05:35 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter])
	{
		if (s[counter] == c)
			return ((char *) &(s[counter]));
		counter ++;
	}
	if (s[counter] == c)
		return ((char *) &(s[counter]));
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// /*
//  * Test the implementation of strchr.
//  * Normal, edge, and error cases are covered.
//  */

// void test_strchr()
// {
//     char *result;

//     /* Normal cases */
//     printf("Normal cases:\n");

//     // Case 1: Character in the middle of the string
//     result = strchr("hello world", 'o');
//     printf("Test 1 - Expected: 'o world', Got: %s\n", result);

//     // Case 2: Character at the start of the string
//     result = strchr("apple", 'a');
//     printf("Test 2 - Expected: 'apple', Got: %s\n", result);

//     // Case 3: Character at the end of the string
//     result = strchr("banana", 'a');
//     printf("Test 3 - Expected: 'ana', Got: %s\n", result);

//     // Case 4: Repeated character in the string
//     result = strchr("mississippi", 's');
//     printf("Test 4 - Expected: 'ssissippi', Got: %s\n", result);

//     // Case 5: Character appears multiple times, return the first occurrence
//     result = strchr("programming", 'g');
//     printf("Test 5 - Expected: 'gramming', Got: %s\n", result);

//     /* Edge cases */
//     printf("\nEdge cases:\n");

//     // Case 6: Empty string
//     result = strchr("", 'a');
//     printf("Test 6 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 7: Search for null terminator
//     result = strchr("end of string", '\0');
//     printf("Test 7 - Expected: '', Got: %s\n", result ? result : "(null)");

//     // Case 8: Character not in the string
//     result = strchr("hello", 'z');
//     printf("Test 8 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 9: String with special characters
//     result = strchr("hello\nworld", '\n');
//     printf("Test 9 - Expected: '\\nworld', Got: %s\n", result ? result : "(null)");

//     // Case 10: Search in a single-character string
//     result = strchr("x", 'x');
//     printf("Test 10 - Expected: 'x', Got: %s\n", result);

//     /* Error cases */
//     printf("\nError cases:\n");

//     // Case 11: Null string pointer
//     //result = strchr(NULL, 'a');
//     //printf("Test 11 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 12: Search for a non-ASCII character
//     result = strchr("simple test", 200);  // Out-of-range char
//     printf("Test 12 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 13: Search in string with NULL in between
//     char test_str[12] = {'h', 'e', '\0', 'l', 'o', '\0'};
//     result = strchr(test_str, 'l');
//     printf("Test 13 - Expected: 'lo', Got: %s\n", result);

//     // Case 14: String contains only null characters
//     char all_nulls[5] = {'\0', '\0', '\0', '\0', '\0'};
//     result = strchr(all_nulls, '\0');
//     printf("Test 14 - Expected: '', Got: %s\n", result ? result : "(null)");

//     // Case 15: Search for non-printable character
//     result = strchr("\x01\x02\x03", '\x02');
//     printf("Test 15 - Expected: '\\x02\\x03', Got: %s\n", result ? result : "(null)");
// }

// int main()
// {
//     test_strchr();
//     return 0;
// }