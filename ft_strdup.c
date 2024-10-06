/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:29:23 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 17:29:27 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int			size;
	int			i;
	char		*result;

	i = 0;
	size = ft_strlen(s);
	if (size == 0)
	{
		result = malloc(1);
		result[0] = 0;
		return (result);
	}
	result = malloc(size + 1);
	if (!result)
		return (0);
	while (i < size)
	{
		result[i] = s[i];
		i++;
	}
	result[i++] = 0;
	return (result);
}

// #include <string.h>  // For comparison with the original strdup
// #include <stdio.h>

// void test_ft_strdup(const char *str)
// {
//     char *result = ft_strdup(str);
//     char *expected = strdup(str);

//     if ((result == NULL && expected == NULL) || (result && expected && strcmp(result, expected) == 0))
//         printf("Test passed for input: \"%s\"\n", str ? str : "NULL");
//     else
//         printf("Test failed for input: \"%s\" | Expected: \"%s\", Got: \"%s\"\n",
//                str ? str : "NULL", expected ? expected : "NULL", result ? result : "NULL");

//     free(result);   // Free allocated memory to avoid leaks
//     free(expected); // Free expected to avoid leaks
// }

// int main(void)
// {
//     //Normal cases
//     test_ft_strdup("Hello, world!");
//     test_ft_strdup("42");
//     test_ft_strdup("");
//     test_ft_strdup("A very long string that keeps going and going and going...");
//     test_ft_strdup("Test123456");

//     // Edge cases
//     test_ft_strdup(" ");
//     test_ft_strdup("\t\n");
//     test_ft_strdup("Duplicated\0string");
//     test_ft_strdup("\0");
//     test_ft_strdup("Repeat after me: strdup");

//    // Error cases
//     test_ft_strdup(NULL); // Check how your implementation handles a NULL input

//     return 0;
// }