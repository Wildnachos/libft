/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:40:43 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:40:43 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int				count;

	count = 0;
	while (src[count] && (count < (size - 1)))
	{
		dst[count] = src[count];
		count++;
	}
	if (size > 0)
		dst[count] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>
#include <string.h>

void test_result(const char *test_name, const char *dst, size_t ret, const char *expected_dst, size_t expected_ret) 
{
    if (strcmp(dst, expected_dst) == 0 && ret == expected_ret) 
    {
        printf("%s: PASSED\n", test_name);
    } 
    else 
    {
        printf("%s: FAILED (Got: \"%s\", %zu | Expected: \"%s\", %zu)\n", 
                test_name, dst, ret, expected_dst, expected_ret);
    }
}

int main(void)
{
    char    dst[50];
    size_t  ret;

    // Normal Case 1: Simple copy
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "Hello, World!", 50);
    test_result("Normal Case 1", dst, ret, "Hello, World!", strlen("Hello, World!"));

    // Normal Case 2: Copy with exact buffer size
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "Hello", 6);
    test_result("Normal Case 2", dst, ret, "Hello", strlen("Hello"));

    // Normal Case 3: Copy with smaller buffer size
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "Hello, World!", 8);
    test_result("Normal Case 3", dst, ret, "Hello, ", strlen("Hello, World!"));

    // Normal Case 4: Copy with large source string
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "This is a very long string to test copying behavior.", 50);
    test_result("Normal Case 4", dst, ret, "This is a very long string to test copying behav", 
                strlen("This is a very long string to test copying behavior."));

    // Normal Case 5: Copy an empty string
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "", 50);
    test_result("Normal Case 5", dst, ret, "", 0);

    // Edge Case 1: Buffer size of zero
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "Hello", 0);
    test_result("Edge Case 1", dst, ret, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", 
                strlen("Hello"));

    // Edge Case 2: Source string exactly fills the buffer
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "123456789", 10);
    test_result("Edge Case 2", dst, ret, "123456789", strlen("123456789"));

    // Edge Case 3: Source string larger than buffer by one
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "1234567890", 10);
    test_result("Edge Case 3", dst, ret, "123456789", strlen("1234567890"));

    // Edge Case 4: Source string is exactly the buffer size - 1
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "12345678", 9);
    test_result("Edge Case 4", dst, ret, "12345678", strlen("12345678"));

    // Edge Case 5: Empty source string with buffer size of 1
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "", 1);
    test_result("Edge Case 5", dst, ret, "", 0);

    // Error Case 1: NULL destination pointer
    ret = ft_strlcpy(NULL, "Hello", 5);
    printf("Error Case 1: NULL dst, ret: %zu (Expected behavior: should handle or ignore)\n", ret);

    // Error Case 2: NULL source pointer
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, NULL, 5);
    printf("Error Case 2: NULL src, ret: %zu (Expected behavior: should handle or ignore)\n", ret);

    // Error Case 3: NULL source and destination pointers
    ret = ft_strlcpy(NULL, NULL, 5);
    printf("Error Case 3: NULL dst and src, ret: %zu (Expected behavior: should handle or ignore)\n", ret);

    // Error Case 4: Buffer size is extremely large (potential overflow scenario)
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "This is a test", 5000);
    test_result("Error Case 4", dst, ret, "This is a test", strlen("This is a test"));

    // Error Case 5: Extremely small buffer with non-empty source
    memset(dst, 'A', 50);
    ret = ft_strlcpy(dst, "Test", 1);
    test_result("Error Case 5", dst, ret, "", strlen("Test"));

    return 0;
}