/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: NinaK <NinaK@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 21:59:55 by NinaK   #+#    #+#                       */
/*   Updated: 2025/12/21 21:59:55 by NinaK  ###   ########.fr                 */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (s[i] != '\0')
		i++;
	a = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == a)
			return (&((char *)s)[i]);
		i--;
	}
	return (0);
}
