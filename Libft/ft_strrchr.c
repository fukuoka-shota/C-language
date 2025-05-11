/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 01:10:52 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/12 01:44:45 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}

// int main(void)
// {
// 	// const char *s = "balcerona";
// 	// int c = 'l';
// 	const char *s = "lanceronla"; // 先頭が 'l'
// 	int c = '\0';
// 	char *l_pointer = ft_strrchr(s, c);
// 	printf("%s\n", l_pointer);
// }