/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:26:13 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/13 10:26:48 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;

	copy = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!copy)
		return (0);
	ft_memcpy(copy, str, (ft_strlen(str) + 1));
	return (copy);
}
