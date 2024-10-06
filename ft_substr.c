/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:20:24 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 16:20:24 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;
	int		j;

	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			result[j++] = s[i];
		i++;
	}
	result[j] = 0;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void test_ft_substr(void)
// {
//     char *result;

//     // Normal cases
//     printf("Running normal cases:\n");

//     // Case 1: Substring from the middle of the string
//     result = ft_substr("Hello, World!", 7, 5);
//     printf("Case 1: Substring of 'Hello, World!' from index 7 with length 5: %s\n", result);
//     free(result);

//     // Case 2: Substring from the start of the string
//     result = ft_substr("Hello, World!", 0, 5);
//     printf("Case 2: Substring of 'Hello, World!' from index 0 with length 5: %s\n", result);
//     free(result);

//     // Case 3: Substring with len greater than available characters
//     result = ft_substr("Hello, World!", 7, 50);
//     printf("Case 3: Substring of 'Hello, World!' from index 7 with length 50: %s\n", result);
//     free(result);

//     // Case 4: Substring with len exactly equal to remaining characters
//     result = ft_substr("Hello, World!", 7, 6);
//     printf("Case 4: Substring of 'Hello, World!' from index 7 with length 6: %s\n", result);
//     free(result);

//     // Case 5: Substring with len = 0 (should return an empty string)
//     result = ft_substr("Hello, World!", 7, 0);
//     printf("Case 5: Substring of 'Hello, World!' from index 7 with length 0: '%s'\n", result);
//     free(result);

//     // Edge cases
//     printf("\nRunning edge cases:\n");

//     // Case 6: Substring starting after the string's end (should return an empty string)
//     result = ft_substr("Hello, World!", 50, 5);
//     printf("Case 6: Substring of 'Hello, World!' from index 50 with length 5: '%s'\n", result);
//     free(result);

//     // Case 7: Substring from the very end of the string (should return an empty string)
//     result = ft_substr("Hello, World!", 12, 1);
//     printf("Case 7: Substring of 'Hello, World!' from index 12 with length 1: '%s'\n", result);
//     free(result);

//     // Case 8: Substring from the last character
//     result = ft_substr("Hello, World!", 11, 1);
//     printf("Case 8: Substring of 'Hello, World!' from index 11 with length 1: %s\n", result);
//     free(result);

//     // Case 9: Empty input string (should return an empty string)
//     result = ft_substr("", 0, 5);
//     printf("Case 9: Substring of an empty string with length 5: '%s'\n", result);
//     free(result);

//     // Case 10: String with only whitespace characters
//     result = ft_substr("     ", 1, 3);
//     printf("Case 10: Substring of '     ' from index 1 with length 3: '%s'\n", result);
//     free(result);

//     // Error cases
//     printf("\nRunning error cases:\n");

//     // Case 11: NULL input string (should return NULL)
//     result = ft_substr(NULL, 2, 5);
//     if (result == NULL)
//         printf("Case 11: Substring from a NULL input: NULL (correct)\n");
//     else
//         printf("Case 11: Substring from a NULL input: %s (incorrect)\n", result);

//     // Case 12: Large start index beyond string length (should return an empty string)
//     result = ft_substr("Hello", 1000, 5);
//     printf("Case 12: Substring of 'Hello' from index 1000 with length 5: '%s'\n", result);
//     free(result);

//     // Case 13: Substring from negative start index (invalid index, test for safety)
//     result = ft_substr("Hello", -1, 5); // This will fail only in compilers treating unsigned as negative
//     printf("Case 13: Substring of 'Hello' from index -1 (invalid): %s\n", result);
//     free(result);

//     // Case 14: Start at string's length with non-zero len (should return empty string)
//     result = ft_substr("Test", 4, 5); // Start at the end of the string
//     printf("Case 14: Substring of 'Test' from index 4 with length 5: '%s'\n", result);
//     free(result);

//     // Case 15: Substring with very large len but valid start index
//     result = ft_substr("Test", 2, 100);
//     printf("Case 15: Substring of 'Test' from index 2 with length 100: %s\n", result);
//     free(result);
// }

// int main(void)
// {
//     test_ft_substr();
//     return 0;
// }
