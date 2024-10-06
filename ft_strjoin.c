/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:42:43 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 16:44:06 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin(char const *s1, char const*s2)
// {
// 	int		l1;
// 	int		l2;
// 	char	*result;
// 	int		i;
// 	int		j;

// 	l1 = ft_strlen(s1);
// 	l2 = ft_strlen(s2);
// 	result = malloc(sizeof(char) * (l1 + l2 + 1));
// 	if (!result)
// 		return (NULL);
// 	i = -1;
// 	j = -1;
// 	while (s1[++i])
// 		result[i] = s1[i];
// 	printf("%d\n", i);
// 	while (s2[++j])
// 		result[i++] = s2[j];
// 	result[i] = 0;
// 	return (result);
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void test_ft_strjoin(void)
// {
//     char *result;

//     // Normal cases
//     printf("Running normal cases:\n");

//     // Case 1: Join two normal strings
//     result = ft_strjoin("Hello, ", "World!");
//     printf("Case 1: Join 'Hello, ' and 'World!': %s\n", result);
//     free(result);

//     // Case 2: Join two different strings
//     result = ft_strjoin("42", " School");
//     printf("Case 2: Join '42' and ' School': %s\n", result);
//     free(result);

//     // Case 3: Join two numeric strings
//     result = ft_strjoin("123", "456");
//     printf("Case 3: Join '123' and '456': %s\n", result);
//     free(result);

//     // Case 4: Join strings with special characters
//     result = ft_strjoin("@#!", "$^");
//     printf("Case 4: Join '@#!' and '$^': %s\n", result);
//     free(result);

//     // Case 5: Join longer strings
//     result = ft_strjoin("Long string part 1 ", "and part 2");
//     printf("Case 5: Join 'Long string part 1 ' and 'and part 2': %s\n", result);
//     free(result);

//     // Edge cases
//     printf("\nRunning edge cases:\n");

//     // Case 6: Join an empty string with a non-empty string
//     result = ft_strjoin("", "World");
//     printf("Case 6: Join '' and 'World': %s\n", result);
//     free(result);

//     // Case 7: Join a non-empty string with an empty string
//     result = ft_strjoin("Hello", "");
//     printf("Case 7: Join 'Hello' and '': %s\n", result);
//     free(result);

//     // Case 8: Join two empty strings
//     result = ft_strjoin("", "");
//     printf("Case 8: Join '' and '': '%s'\n", result);
//     free(result);

//     // Case 9: Join a string with itself
//     result = ft_strjoin("Repeat", "Repeat");
//     printf("Case 9: Join 'Repeat' and 'Repeat': %s\n", result);
//     free(result);

//     // Case 10: Join strings with whitespace characters
//     result = ft_strjoin("  ", "\t\n");
//     printf("Case 10: Join '  ' and '\\t\\n': '%s'\n", result);
//     free(result);

//     // Error cases
//     printf("\nRunning error cases:\n");

//     // Case 11: First string is NULL
//     result = ft_strjoin(NULL, "World");
//     if (result == NULL)
//         printf("Case 11: Join NULL and 'World': NULL (correct)\n");
//     else
//         printf("Case 11: Join NULL and 'World': %s (incorrect)\n", result);

//     // Case 12: Second string is NULL
//     result = ft_strjoin("Hello", NULL);
//     if (result == NULL)
//         printf("Case 12: Join 'Hello' and NULL: NULL (correct)\n");
//     else
//         printf("Case 12: Join 'Hello' and NULL: %s (incorrect)\n", result);

//     // Case 13: Both strings are NULL
//     result = ft_strjoin(NULL, NULL);
//     if (result == NULL)
//         printf("Case 13: Join NULL and NULL: NULL (correct)\n");
//     else
//         printf("Case 13: Join NULL and NULL: %s (incorrect)\n", result);

//     // Case 14: Memory allocation failure (simulated)
//     // In a real scenario, you could mock `malloc` to simulate failure.
// }

// int main(void)
// {
//     test_ft_strjoin();
//     return 0;
// }
