/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:05:26 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:05:26 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = c;
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char buffer1[50];
//     char buffer2[50];

//     // Fill buffers with some data
//     strcpy(buffer1, "This is a test string.");
//     strcpy(buffer2, "This is a test string.");

//     // Apply the standard memset
//     memset(buffer1, '*', 10);

//     // Apply your custom memset
//     ft_memset(buffer2, '*', 10);

//     // Compare the results
//     if (memcmp(buffer1, buffer2, 22) == 0) {
//         printf("Test passed: The buffers are identical.\n");
//     } else {
//         printf("Test failed: The buffers are different.\n");
//     }

//     // For visual verification
//     printf("Standard memset result: %s\n", buffer1);
//     printf("Custom memset result: %s\n", buffer2);

//     return 0;
// }