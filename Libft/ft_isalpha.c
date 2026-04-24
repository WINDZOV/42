/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:29:36 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/09 11:34:55 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	if (x >= 'a' && x <= 'z')
		return (1);
	if (x >= 'A' && x <= 'Z')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d\n", ft_isalpha('a'), ft_isalpha(' '), ft_isalpha('2'));
	return (0);
}*/
