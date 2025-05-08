/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:26:58 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/08 14:19:09 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dst1[20];
// 	char dst2[5];
// 	char dst3[1];

// 	size_t ret1 = ft_strlcpy(dst1, src, sizeof(dst1));
// 	printf("dst1: \"%s\" (ret: %zu)\n", dst1, ret1);
// 	size_t ret2 = ft_strlcpy(dst2, src, sizeof(dst2));
//     printf("dst2: \"%s\" (ret: %zu)\n", dst2, ret2);

//     size_t ret3 = ft_strlcpy(dst3, src, 0);
//     printf("ret3 (no copy, size=0): %zu\n", ret3);

//     return 0;
// }