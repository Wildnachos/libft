/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:04:57 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:04:57 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int            i;
    const char  *c1;
    const char  *c2;

    c1 = s1;
    c2 = s2;
	i = 0;
	while (c1[i] == c2[i] && i < n)
		i++;
	return (c1[i] - c2[i]);
}

#include <stdio.h>
#include <string.h>

/*
 * Test the implementation of ft_memcmp.
 * Normal, edge, and error cases are covered.
 */

void test_ft_memcmp()
{
    int result;

    /* Normal cases */
    printf("Normal cases:\n");

    // Case 1: Identical memory blocks
    char data1[] = "apple";
    char data2[] = "apple";
    result = ft_memcmp(data1, data2, 5);
    printf("Test 1 - Expected: 0, Got: %d\n", result);

    // Case 2: First block less than second block
    char data3[] = "apple";
    char data4[] = "banana";
    result = ft_memcmp(data3, data4, 5);
    printf("Test 2 - Expected: < 0, Got: %d\n", result);

    // Case 3: First block greater than second block
    char data5[] = "orange";
    char data6[] = "apple";
    result = ft_memcmp(data5, data6, 6);
    printf("Test 3 - Expected: > 0, Got: %d\n", result);

    // Case 4: First n bytes are the same, difference after
    char data7[] = "programming";
    char data8[] = "programmers";
    result = ft_memcmp(data7, data8, 7);  // First 7 bytes are equal
    printf("Test 4 - Expected: 0, Got: %d\n", result);

    // Case 5: Compare non-null-terminated memory blocks
    char data9[] = { 'a', 'b', 'c', 'd' };
    char data10[] = { 'a', 'b', 'c', 'e' };
    result = ft_memcmp(data9, data10, 4);  // Compare the first 4 bytes
    printf("Test 5 - Expected: < 0, Got: %d\n", result);

    /* Edge cases */
    printf("\nEdge cases:\n");

    // Case 6: Empty memory blocks
    result = ft_memcmp("", "", 1);
    printf("Test 6 - Expected: 0, Got: %d\n", result);

    // Case 7: Comparing blocks with different sizes (but comparing only first few bytes)
    result = ft_memcmp("hello", "hello world", 5);  // Compare only the first 5 bytes
    printf("Test 7 - Expected: 0, Got: %d\n", result);

    // Case 8: Comparing blocks where one is shorter, but comparing up to null terminator
    result = ft_memcmp("short", "shorter", 6);  // First 6 bytes should be compared
    printf("Test 8 - Expected: < 0, Got: %d\n", result);

    // Case 9: n is 0 (should always return 0 regardless of input)
    result = ft_memcmp("abc", "def", 0);
    printf("Test 9 - Expected: 0, Got: %d\n", result);

    // Case 10: Compare non-ASCII characters
    char non_ascii1[] = { '\x80', '\x81', '\x82' };
    char non_ascii2[] = { '\x80', '\x81', '\x83' };
    result = ft_memcmp(non_ascii1, non_ascii2, 3);  // Compare non-ASCII characters
    printf("Test 10 - Expected: < 0, Got: %d\n", result);

    /* Error cases */
    printf("\nError cases:\n");

    // Case 11: n is larger than one of the memory blocks
    result = ft_memcmp(data9, data10, 10);  // Compare more than the actual size
    printf("Test 11 - Expected: < 0, Got: %d\n", result);

    // Case 12: Memory blocks with null bytes inside
    char data11[] = { 'a', '\0', 'b', 'c' };
    char data12[] = { 'a', '\0', 'b', 'd' };
    result = ft_memcmp(data11, data12, 4);  // Compare with null bytes inside
    printf("Test 12 - Expected: < 0, Got: %d\n", result);

    // Case 13: Memory blocks with all null characters
    char all_nulls1[] = { '\0', '\0', '\0' };
    char all_nulls2[] = { '\0', '\0', '\0' };
    result = ft_memcmp(all_nulls1, all_nulls2, 3);  // Compare all null characters
    printf("Test 13 - Expected: 0, Got: %d\n", result);

    // Case 14: Compare non-printable characters
    char non_printable1[] = { '\x01', '\x02', '\x03' };
    char non_printable2[] = { '\x01', '\x02', '\x04' };
    result = ft_memcmp(non_printable1, non_printable2, 3);  // Compare non-printable characters
    printf("Test 14 - Expected: < 0, Got: %d\n", result);

    // Case 15: Compare large blocks of memory
    char large_data1[1000], large_data2[1000];
    memset(large_data1, 'A', 1000);  // Fill both with 'A'
    memset(large_data2, 'A', 1000);
    large_data2[500] = 'B';  // Introduce a difference at index 500
    result = ft_memcmp(large_data1, large_data2, 1000);
    printf("Test 15 - Expected: < 0, Got: %d\n", result);
}

int main()
{
    test_ft_memcmp();
    return 0;
}
