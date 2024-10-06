/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:43:55 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:45:09 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	int				count;
	int				count2;

	count = 0;
	count2 = 0;
	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	while (dst[count++])
		size--;
	while (size > 1 && src[count2])
		dst[count++] = src[count2++];
	dst[count] = src[count2];
	return (ft_strlen(src) + len);
}

#include <stdio.h>
#include <string.h>  // For comparison with the original strlcat
#include <bsd/string.h>  // If your system has the original strlcat
#include <stdlib.h>

void test_ft_strlcat(void)
{
    char dst[50];
    const char *src;
    size_t result;
    size_t expected;

    // Normal cases
    printf("Running normal cases:\n");
    
    // Case 1: Normal concatenation with enough space
    strcpy(dst, "Hello");
    src = " World";
    result = ft_strlcat(dst, src, 50);
    expected = strlcat(dst, src, 50);
    printf("Case 1: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 2: Concatenation with exactly enough space
    strcpy(dst, "Hello");
    src = " World";
    result = ft_strlcat(dst, src, 12);  // 6 ("Hello") + 6 (" World")
    expected = strlcat(dst, src, 12);
    printf("Case 2: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 3: Concatenation where dstsize is larger than needed
    strcpy(dst, "42");
    src = " students!";
    result = ft_strlcat(dst, src, 20);
    expected = strlcat(dst, src, 20);
    printf("Case 3: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 4: Concatenating an empty src string
    strcpy(dst, "Non-empty");
    src = "";
    result = ft_strlcat(dst, src, 50);
    expected = strlcat(dst, src, 50);
    printf("Case 4: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 5: Concatenating to an empty dst string
    strcpy(dst, "");
    src = "Test";
    result = ft_strlcat(dst, src, 10);
    expected = strlcat(dst, src, 10);
    printf("Case 5: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Edge cases
    printf("\nRunning edge cases:\n");

    // Case 6: dstsize is 0
    strcpy(dst, "Non-empty");
    src = " More text";
    result = ft_strlcat(dst, src, 0);
    expected = strlcat(dst, src, 0);
    printf("Case 6: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 7: dstsize is 1 (space only for null terminator)
    strcpy(dst, "Non-empty");
    src = " More text";
    result = ft_strlcat(dst, src, 1);
    expected = strlcat(dst, src, 1);
    printf("Case 7: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 8: dstsize is less than the length of dst
    strcpy(dst, "Non-empty");
    src = " More text";
    result = ft_strlcat(dst, src, 5);
    expected = strlcat(dst, src, 5);
    printf("Case 8: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 9: dstsize is exactly the length of dst
    strcpy(dst, "Non-empty");
    src = " More text";
    result = ft_strlcat(dst, src, 9);  // "Non-empty" is 9 characters long
    expected = strlcat(dst, src, 9);
    printf("Case 9: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 10: dstsize is just 1 greater than dst length
    strcpy(dst, "Non-empty");
    src = " More text";
    result = ft_strlcat(dst, src, 10);
    expected = strlcat(dst, src, 10);
    printf("Case 10: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Error cases
    printf("\nRunning error cases:\n");

    // Case 11: dst is NULL
    src = "Hello";
    result = ft_strlcat(NULL, src, 10);
    printf("Case 11: NULL dst | Result: %zu\n", result);

    // Case 12: src is NULL
    strcpy(dst, "Hello");
    result = ft_strlcat(dst, NULL, 10);
    printf("Case 12: NULL src | Result: %zu\n", result);

    // Case 13: Both dst and src are NULL
    result = ft_strlcat(NULL, NULL, 10);
    printf("Case 13: NULL dst & src | Result: %zu\n", result);

    // Case 14: dstsize is very large but dst is a short string
    strcpy(dst, "Short");
    src = " and very long string to add";
    result = ft_strlcat(dst, src, 1000);
    expected = strlcat(dst, src, 1000);
    printf("Case 14: %s | Result: %zu | Expected: %zu\n", dst, result, expected);

    // Case 15: dstsize is smaller than both dst and src combined (possible truncation)
    strcpy(dst, "This is a test");
    src = " string";
    result = ft_strlcat(dst, src, 15);
    expected = strlcat(dst, src, 15);
    printf("Case 15: %s | Result: %zu | Expected: %zu\n", dst, result, expected);
}

int main(void)
{
    test_ft_strlcat();
    return 0;
}
