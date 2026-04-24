/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:34:27 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/09 11:34:34 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	if (x >= 'a' && x <= 'z')
		return (1);
	if (x >= 'A' && x <= 'Z')
		return (1);
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d %d %d %d\n", ft_isalnum('a'), ft_isalnum('A'),
       		ft_isalnum('0'), ft_isalnum('9'), ft_isalnum(' '), ft_isalnum('!'));
	return (0);
}*/
