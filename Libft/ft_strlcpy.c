/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:26:58 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/08 13:38:49 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (destsize > 0)
	{
		while (i < destsize - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dest1[20];
// 	char dest2[5];
// 	char dest3[1];

// 	size_t ret1 = ft_strlcpy(dest1, src, sizeof(dest1));
// 	printf("dest1: \"%s\" (ret: %zu)\n", dest1, ret1);
// 	size_t ret2 = ft_strlcpy(dest2, src, sizeof(dest2));
//     printf("dest2: \"%s\" (ret: %zu)\n", dest2, ret2);

//     size_t ret3 = ft_strlcpy(dest3, src, 0);
//     printf("ret3 (no copy, size=0): %zu\n", ret3);

//     return 0;
// }