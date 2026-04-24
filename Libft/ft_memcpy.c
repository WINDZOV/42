/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: NinaK <NinaK@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 09:29:02 by NinaK             #+#    #+#             */
/*   Updated: 2025/12/20 09:29:02 by NinaK            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	if (!dest && !src)
		return (0);
	str = (char *)dest;
	while (i < (int)n)
	{
		str[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
