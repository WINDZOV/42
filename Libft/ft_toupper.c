/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                  :+:      :+:    :+:        */
/*                                                    +:+ +:+         +:+     */
/*   By: NinaK <NinaK@student.42.fr>                        +#+  +:+      +#+ */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 21:55:05 by NinaK      #+#    #+#                    */
/*   Updated: 2025/12/19 21:55:05 by NinaK      ###   ########.fr             */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c %c %c\n", ft_toupper('a'), ft_toupper('Z'), ft_toupper('1'));
	return (0);
}*/
