/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:49:42 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/11 00:29:11 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
// 	// const char *s = "balcerona";
// 	// int c = 'l';
// 	const char *s = "lancerona"; // 先頭が 'l'
// 	int c = 'l';
// 	char *l_pointer = ft_strchr(s, c);
// 	printf("%s\n", l_pointer);
// }