/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 11:38:24 by nkilosan          #+#    #+#             */
/*   Updated: 2026/01/09 12:43:38 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setchar(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static void	find_bounds(const char *s1, const char *set, int *start, int *end)
{
	*start = 0;
	while (s1[*start] && setchar(s1[*start], set))
		(*start)++;
	*end = 0;
	while (s1[*end])
		(*end)++;
	(*end)--;
	while (*end >= *start && setchar(s1[*end], set))
		(*end)--;
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	find_bounds(s1, set, &start, &end);
	if (start > end)
	{
		res = malloc(1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
