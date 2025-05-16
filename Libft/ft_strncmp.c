/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 22:00:56 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/17 00:50:42 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return ((char)s1[i] - (char)s2[i]);
}

// int main(void)
// {
// 	const char *s1 = "ab";
// 	const char *s2 = "ab";
// 	size_t n = 3;
// 	int result = ft_strncmp(s1, s2, n);
// 	printf("%d\n", result);
// 	return 0;
// }