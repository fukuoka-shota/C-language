/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfuku <sfuku@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 00:31:12 by sfuku             #+#    #+#             */
/*   Updated: 2025/05/09 09:23:41 by sfuku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c + 'A' - 'a';
	return (c);
}

// int	main(void)
// {
// 	char	b = 'c';
// 	char	c = 'D';
// 	char	b_app = ft_toupper(b);
// 	char	c_app = ft_toupper(c);
// 	printf("%c\n", b_app);	
// 	printf("%c\n", c_app);
// }