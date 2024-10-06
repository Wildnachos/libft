/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:07:19 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:07:19 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && i < n)
		i++;
	return (s1 - s2);
}

#include <stdio.h>
#include <string.h>

/*
 * Test the implementation of strncmp.
 * Normal and edge cases are covered.
 */

void test_strncmp()
{
    int result;

    /* Normal cases */
    printf("Normal cases:\n");

    // Case 1: Identical strings
    result = strncmp("apple", "apple", 5);
    printf("Test 1 - Expected: 0, Got: %d\n", result);

    // Case 2: First string less than second string
    result = strncmp("apple", "banana", 5);
    printf("Test 2 - Expected: < 0, Got: %d\n", result);

    // Case 3: First string greater than second string
    result = strncmp("orange", "apple", 6);
    printf("Test 3 - Expected: > 0, Got: %d\n", result);

    // Case 4: Compare only the first n characters (equal)
    result = strncmp("orange", "orchestra", 2);
    printf("Test 4 - Expected: 0, Got: %d\n", result);

    // Case 5: Compare only the first n characters (different)
    result = strncmp("orange", "orchestra", 3);
    printf("Test 5 - Expected: > 0, Got: %d\n", result);

    /* Edge cases */
    printf("\nEdge cases:\n");

    // Case 6: Empty strings
    result = strncmp("", "", 1);
    printf("Test 6 - Expected: 0, Got: %d\n", result);

    // Case 7: First string empty, second non-empty
    result = strncmp("", "non-empty", 3);
    printf("Test 7 - Expected: < 0, Got: %d\n", result);

    // Case 8: First string non-empty, second empty
    result = strncmp("non-empty", "", 3);
    printf("Test 8 - Expected: > 0, Got: %d\n", result);

    // Case 9: n is 0 (should always return 0)
    result = strncmp("abc", "def", 0);
    printf("Test 9 - Expected: 0, Got: %d\n", result);

    // Case 10: n larger than both strings
    result = strncmp("short", "shorter", 10);
    printf("Test 10 - Expected: < 0, Got: %d\n", result);

    // Case 11: First string is longer, but only compare first n characters
    result = strncmp("hello", "he", 2);
    printf("Test 11 - Expected: 0, Got: %d\n", result);

    // Case 12: Case-sensitive comparison
    result = strncmp("Hello", "hello", 5);
    printf("Test 12 - Expected: < 0, Got: %d\n", result);

    // Case 13: Compare string with special characters
    result = strncmp("hello\nworld", "hello world", 11);
    printf("Test 13 - Expected: < 0, Got: %d\n", result);

    // Case 14: Compare string with non-ASCII characters
    result = strncmp("héllo", "hello", 5);
    printf("Test 14 - Expected: > 0, Got: %d\n", result);

    // Case 15: Compare strings with spaces
    result = strncmp("hello world", "hello", 11);
    printf("Test 15 - Expected: > 0, Got: %d\n", result);
}

int main()
{
    test_strncmp();
    return 0;
}
