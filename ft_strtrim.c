/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:54:38 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 17:32:05 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	if_in(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	totlen;

	start = 0;
	totlen = ft_strlen(s1) - 1;
	if (s1[0] == 0)
		return (ft_strdup(s1));
	while (s1[start] && if_in(set, s1[start]))
		start++;
	while (totlen >= start && if_in(set, s1[totlen]))
		totlen--;
	totlen -= start;
	printf("%d\t%d\n", start, totlen);
	return (ft_substr(s1, start, totlen + 1));
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void test_ft_strtrim(void)
// {
//     char *result;

//     // Normal cases
//     printf("Running normal cases:\n");

//     // Case 1: Trim spaces from the start and end
//     result = ft_strtrim("   Hello, World!   ", " ");
//     printf("Case 1: Trim '   Hello, World!   ' with set ' ': '%s'\n", result);
//     free(result);

//     // Case 2: Trim specific characters
//     result = ft_strtrim("xx42 is coolxx", "x");
//     printf("Case 2: Trim 'xx42 is coolxx' with set 'x': '%s'\n", result);
//     free(result);

//     // Case 3: Trim multiple characters (spaces and punctuation)
//     result = ft_strtrim("!!!---Hello---!!!", "!-");
//     printf("Case 3: Trim '!!!---Hello---!!!' with set '!-': '%s'\n", result);
//     free(result);

//     // Case 4: No trimming needed
//     result = ft_strtrim("Hello, World!", "x");
//     printf("Case 4: Trim 'Hello, World!' with set 'x': '%s'\n", result);
//     free(result);

//     // Case 5: Trim all characters
//     result = ft_strtrim("abcdef", "abcdef");
//     printf("Case 5: Trim 'abcdef' with set 'abcdef': '%s'\n", result);
//     free(result);

//     // Edge cases
//     printf("\nRunning edge cases:\n");

//     // Case 6: Empty string as input
//     result = ft_strtrim("", " ");
//     printf("Case 6: Trim '' with set ' ': '%s'\n", result);
//     free(result);

//     // Case 7: Empty set
//     result = ft_strtrim("Hello, World!", "");
//     printf("Case 7: Trim 'Hello, World!' with set '': '%s'\n", result);
//     free(result);

//     // Case 8: Trim with set containing all whitespace characters
//     result = ft_strtrim("   \t\nHello, World!  \t\n", " \t\n");
//     printf("Case 8: Trim '   \\t\\nHello, World!  \\t\\n' with set ' \\t\\n': '%s'\n", result);
//     free(result);

//     // Case 9: Trim a single character from both ends
//     result = ft_strtrim("xx42xx", "x");
//     printf("Case 9: Trim 'xx42xx' with set 'x': '%s'\n", result);
//     free(result);

//     // Case 10: Input string consists entirely of characters from set
//     result = ft_strtrim("xxxxxx", "x");
//     printf("Case 10: Trim 'xxxxxx' with set 'x': '%s'\n", result);
//     free(result);

//     // Error cases
//     printf("\nRunning error cases:\n");

//     // Case 11: NULL input string
//     result = ft_strtrim(NULL, "x");
//     if (result == NULL)
//         printf("Case 11: Trim NULL with set 'x': NULL (correct)\n");
//     else
//         printf("Case 11: Trim NULL with set 'x': '%s' (incorrect)\n", result);

//     // Case 12: NULL set (should not trim anything)
//     result = ft_strtrim("Hello, World!", NULL);
//     if (result == NULL)
//         printf("Case 12: Trim 'Hello, World!' with NULL set: NULL (correct)\n");
//     else
//         printf("Case 12: Trim 'Hello, World!' with NULL set: '%s' (incorrect)\n", result);

//     // Case 13: Both input string and set are NULL
//     result = ft_strtrim(NULL, NULL);
//     if (result == NULL)
//         printf("Case 13: Trim NULL with NULL set: NULL (correct)\n");
//     else
//         printf("Case 13: Trim NULL with NULL set: '%s' (incorrect)\n", result);
// }

// int main(void)
// {
//     test_ft_strtrim();
//     return 0;
// }
