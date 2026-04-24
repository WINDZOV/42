/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:30:51 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/09 11:31:08 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	x;

	x = (unsigned char)c;
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d\n", ft_isdigit(48), ft_isdigit('0'), ft_isdigit('9'));
	return (0);
}*/
