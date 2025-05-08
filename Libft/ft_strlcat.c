/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 13:39:14 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/08 15:43:32 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst_len < dstsize && dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len == dstsize)
		return (dstsize + src_len);
	while ((dst_len + i + 1) < dstsize && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if ((dst_len + i) < dstsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
//     char buffer[20] = "Hello, ";
//     const char *src = "World!";
//     size_t result = ft_strlcat(buffer, src, sizeof(buffer));

//     printf("Resulting string: \"%s\"\n", buffer);
//     printf("Total length attempted: %zu\n", result);

//     return 0;
// }
