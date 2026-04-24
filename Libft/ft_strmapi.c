/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 14:48:51 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/13 15:56:57 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*apply_f(unsigned int index, char *result,
		const char *s, char (*f)(unsigned int, char))
{
	if (*s == '\0')
	{
		result[index] = '\0';
		return (result);
	}
	result[index] = f(index, *s);
	return (apply_f(index + 1, result, s + 1, f));
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*result;

	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	return (apply_f(0, result, s, f));
}
