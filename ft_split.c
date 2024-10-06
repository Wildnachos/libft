/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:33:46 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/06 10:36:30 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	int		sep;
	char	**res;
	int		i;
	int		j;
	int		x;

	sep = 0;
	i = 0;
	if (s[i] != c)
		sep++;
	printf("1");
	while (s[i])#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	int		sep;
	char	**res;
	int		i;
	int		j;
	int		x;

	sep = 0;
	i = 0;
	if (s[i] != c)
		sep++;
	printf("1");
	while (s[i])
	{
		if (s[i] == c)
			sep++;
		i++;
	}
	if (s[i - 1] == c)
		sep--;
	res = malloc(sizeof(char *) * (sep + 1));
	res[sep] = 0;
	j = 0;
	printf("2");
	while (res[j])
	{
		i = 0;
		if (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		res[j] = malloc(sizeof(char) * (i + 1));
		j++;
	}
	j = 0;
	printf("3");
	while (res[j])
	{
		i = 0;
		if (s[i] == c)
			i++;
		x = 0;
		while (s[i] != c)
		{
			res[j][x] = s[i];
			x++;
		}
		res[j][x] = 0;
		j++;
	}
	return (res);
}
	{
		if (s[i] == c)
			sep++;
		i++;
	}
	if (s[i - 1] == c)
		sep--;
	res = malloc(sizeof(char *) * (sep + 1));
	res[sep] = 0;
	j = 0;
	printf("2");
	while (res[j])
	{
		i = 0;
		if (s[i] == c)
			i++;
		while (s[i] != c)
			i++;
		res[j] = malloc(sizeof(char) * (i + 1));
		j++;
	}
	j = 0;
	printf("3");
	while (res[j])
	{
		i = 0;
		if (s[i] == c)
			i++;
		x = 0;
		while (s[i] != c)
		{
			res[j][x] = s[i];
			x++;
		}
		res[j][x] = 0;
		j++;
	}
	return (res);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to print the result of ft_split
void print_split_result(char **result)
{
    if (!result)
    {
        printf("NULL result\n");
        return;
    }
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("result[%d]: '%s'\n", i, result[i]);
    }
}

// Helper function to free the memory allocated by ft_split
void free_split_result(char **result)
{
    int i = 0;
    while (result[i])
    {
        free(result[i]);
        i++;
    }
    free(result);
}

void test_ft_split(void)
{
    char **result;

    // Normal cases
    printf("Running normal cases:\n");

    // Case 1: Split a simple string with spaces as the delimiter
    result = ft_split("Hello World 42", ' ');
    printf("Case 1: Split 'Hello World 42' with delimiter ' ':\n");
    printf("%s\n", result[0]);

    // Case 2: Split a string with a different delimiter
    result = ft_split("apple-orange-banana", '-');
    printf("Case 2: Split 'apple-orange-banana' with delimiter '-':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 3: Split a string with a delimiter that appears at the start and end
    result = ft_split("-42-is-awesome-", '-');
    printf("Case 3: Split '-42-is-awesome-' with delimiter '-':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 4: Split a string with multiple spaces between words
    result = ft_split("  split  this   string ", ' ');
    printf("Case 4: Split '  split  this   string ' with delimiter ' ':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 5: Split a string with no delimiter present
    result = ft_split("NoDelimiterHere", ' ');
    printf("Case 5: Split 'NoDelimiterHere' with delimiter ' ':\n");
    print_split_result(result);
    free_split_result(result);

    // Edge cases
    printf("\nRunning edge cases:\n");

    // Case 6: Split an empty string
    result = ft_split("", ' ');
    printf("Case 6: Split '' with delimiter ' ':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 7: Delimiter not found in the string
    result = ft_split("Hello", ',');
    printf("Case 7: Split 'Hello' with delimiter ',':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 8: Split a string with consecutive delimiters
    result = ft_split(",,,apple,,,orange,,,banana,,,", ',');
    printf("Case 8: Split ',,,apple,,,orange,,,banana,,,' with delimiter ',':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 9: String consists only of delimiter characters
    result = ft_split(",,,,,", ',');
    printf("Case 9: Split ',,,,,' with delimiter ',':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 10: Delimiter is a null character (should treat the entire string as one element)
    result = ft_split("Hello", '\0');
    printf("Case 10: Split 'Hello' with delimiter '\\0':\n");
    print_split_result(result);
    free_split_result(result);

    // Error cases
    printf("\nRunning error cases:\n");

    // // Case 11: NULL input string (should return NULL)
    // result = ft_split(NULL, ' ');
    // if (result == NULL)
    //     printf("Case 11: Split NULL string with delimiter ' ': NULL (correct)\n");
    // else
    //     printf("Case 11: Split NULL string with delimiter ' ': '%s' (incorrect)\n", result);

    // Case 12: Split a string with no characters between delimiters
    result = ft_split("--", '-');
    printf("Case 12: Split '--' with delimiter '-':\n");
    print_split_result(result);
    free_split_result(result);

    // Case 13: Split a string with a very large delimiter count
    result = ft_split("a,b,c,d,e,f,g,h,i,j", ',');
    printf("Case 13: Split 'a,b,c,d,e,f,g,h,i,j' with delimiter ',':\n");
    print_split_result(result);
    free_split_result(result);
}

int main(void)
{
    test_ft_split();
    return 0;
}
