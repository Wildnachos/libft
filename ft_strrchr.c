/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:07:51 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:07:51 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter])
		counter ++;
	while (counter > 0)
	{
		if (s[counter] == c)
			return ((char *) &(s[counter]));
		counter--;
	}
	if (s[counter] == c)
		return ((char *) &(s[counter]));
	return (0);
}

#include <stdio.h>
#include <string.h>

/*
 * Test the implementation of strrchr.
 * Normal, edge, and error cases are covered.
 */

// void test_strrchr()
// {
//     char *result;

//     /* Normal cases */
//     printf("Normal cases:\n");

//     // Case 1: Character in the middle of the string
//     result = strrchr("hello world", 'o');
//     printf("Test 1 - Expected: 'orld', Got: %s\n", result);

//     // Case 2: Character at the start of the string
//     result = strrchr("apple", 'a');
//     printf("Test 2 - Expected: 'apple', Got: %s\n", result);

//     // Case 3: Character at the end of the string
//     result = strrchr("banana", 'a');
//     printf("Test 3 - Expected: 'a', Got: %s\n", result);

//     // Case 4: Repeated character, return the last occurrence
//     result = strrchr("mississippi", 's');
//     printf("Test 4 - Expected: 'sippi', Got: %s\n", result);

//     // Case 5: Character appears multiple times, return the last occurrence
//     result = strrchr("programming", 'g');
//     printf("Test 5 - Expected: 'g', Got: %s\n", result);

//     /* Edge cases */
//     printf("\nEdge cases:\n");

//     // Case 6: Empty string
//     result = strrchr("", 'a');
//     printf("Test 6 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 7: Search for null terminator
//     result = strrchr("end of string", '\0');
//     printf("Test 7 - Expected: '', Got: %s\n", result ? result : "(null)");

//     // Case 8: Character not in the string
//     result = strrchr("hello", 'z');
//     printf("Test 8 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 9: String with special characters
//     result = strrchr("hello\nworld", '\n');
//     printf("Test 9 - Expected: '\\nworld', Got: %s\n", result ? result : "(null)");

//     // Case 10: Search in a single-character string
//     result = strrchr("x", 'x');
//     printf("Test 10 - Expected: 'x', Got: %s\n", result);

//     /* Error cases */
//     printf("\nError cases:\n");

//     // Case 11: Null string pointer
//     //result = strrchr(NULL, 'a');
//     //printf("Test 11 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 12: Search for a non-ASCII character
//     result = strrchr("simple test", 200);  // Out-of-range char
//     printf("Test 12 - Expected: (null), Got: %s\n", result ? result : "(null)");

//     // Case 13: Search in string with NULL in between
//     char test_str[12] = {'h', 'e', '\0', 'l', 'o', '\0'};
//     result = strrchr(test_str, 'l');
//     printf("Test 13 - Expected: 'lo', Got: %s\n", result);

//     // Case 14: String contains only null characters
//     char all_nulls[5] = {'\0', '\0', '\0', '\0', '\0'};
//     result = strrchr(all_nulls, '\0');
//     printf("Test 14 - Expected: '', Got: %s\n", result ? result : "(null)");

//     // Case 15: Search for non-printable character
//     result = strrchr("\x01\x02\x03", '\x02');
//     printf("Test 15 - Expected: '\\x02\\x03', Got: %s\n", result ? result : "(null)");
// }

// int main()
// {
//     test_strrchr();
//     return 0;
// }
