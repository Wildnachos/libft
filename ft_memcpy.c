/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:05:09 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:05:09 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned int	i;
	char			*str;
	char			*str1;

	i = 0;
	str = dest;
	str1 = src;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	str[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char src[50] = "This is a test string for memcpy.";
//     char dest1[50];
//     char dest2[50];

//     // Apply the standard memcpy
//     memcpy(dest1, src, strlen(src) + 1);

//     // Apply your custom ft_memcpy
//     ft_memcpy(dest2, src, strlen(src) + 1);

//     // Compare the results
//     if (memcmp(dest1, dest2, strlen(src) + 1) == 0) {
//         printf("Test passed: The destinations are identical.\n");
//     } else {
//         printf("Test failed: The destinations are different.\n");
//     }

//     // For visual verification
//     printf("Standard memcpy result: %s\n", dest1);
//     printf("Custom ft_memcpy result: %s\n", dest2);

//     return 0;
// }