/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akabbaj <akabbaj@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:05:18 by akabbaj           #+#    #+#             */
/*   Updated: 2024/10/05 15:05:18 by akabbaj          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	char			*str;
	char			*str1;

	i = 0;
	str = dest;
	str1 = src;
	if (dest < src)
	{
		while (i < n)
		{
			str[i] = str1[i];
			i++;
		}
		str[i] = '\0';
	}
	else
	{
		while (n-- > 0)
		{
			str[n] = str1[n];
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>


// int main() {
//     char buffer1[50] = "Overlapping example test for memmove.";
//     char buffer2[50] = "Overlapping example test for memmove.";

//     // Case 1: Non-overlapping regions
//     char dest1[50];
//     char dest2[50];

//     // Apply the standard memmove
//     memmove(dest1, buffer1, strlen(buffer1) + 1);

//     // Apply your custom ft_memmove
//     ft_memmove(dest2, buffer2, strlen(buffer2) + 1);

//     // Compare the results for non-overlapping regions
//     if (memcmp(dest1, dest2, strlen(buffer1) + 1) == 0) {
//         printf("Test passed for non-overlapping regions.\n");
//     } else {
//         printf("Test failed for non-overlapping regions.\n");
//     }

//     // Case 2: Overlapping regions (copying within the same buffer)
//     memmove(buffer1 + 5, buffer1, strlen(buffer1) + 1);
//     ft_memmove(buffer2 + 5, buffer2, strlen(buffer2) + 1);

//     // Compare the results for overlapping regions
//     if (memcmp(buffer1, buffer2, strlen(buffer1) + 1) == 0) {
//         printf("Test passed for overlapping regions.\n");
//     } else {
//         printf("Test failed for overlapping regions.\n");
//     }

//     // For visual verification
//     printf("Standard memmove result (non-overlapping): %s\n", dest1);
//     printf("Custom ft_memmove result (non-overlapping): %s\n", dest2);
//     printf("Standard memmove result (overlapping): %s\n", buffer1);
//     printf("Custom ft_memmove result (overlapping): %s\n", buffer2);

//     return 0;
// }