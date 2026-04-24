/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: NinaK <NinaK@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 21:50:29 by NinaK             #+#    #+#             */
/*   Updated: 2025/12/19 21:50:29 by NinaK            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[50] = "Hello and welcome to BCN 42!";
	printf("%ld\n", ft_strlen(str));
	return (0);
}*/
