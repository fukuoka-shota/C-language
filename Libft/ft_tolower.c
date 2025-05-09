/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:40:16 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/09 22:48:42 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 'a' - 'A';
	return (c);
}

// int	main(void)
// {
// 	char	b = 'c';
// 	char	c = 'D';
// 	char	b_app = ft_tolower(b);
// 	char	c_app = ft_tolower(c);
// 	printf("%c\n", b_app);	
// 	printf("%c\n", c_app);
// }