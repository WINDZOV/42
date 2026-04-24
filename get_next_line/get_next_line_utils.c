/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 10:40:11 by nkilosan          #+#    #+#             */
/*   Updated: 2026/02/02 10:04:22 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*copy;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	copy = malloc(len + 1);
	i = 0;
	if (!copy)
		return (NULL);
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[len] = '\0';
	return (copy);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*new_stash;

	if (!stash)
		stash = ft_strdup("");
	len = ft_strlen(stash) + ft_strlen(buffer);
	new_stash = malloc(len + 1);
	if (!new_stash)
	{
		free(stash);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (stash[i])
		new_stash[j++] = stash[i++];
	i = 0;
	while (buffer[i])
		new_stash[j++] = buffer[i++];
	new_stash[len] = '\0';
	free (stash);
	return (new_stash);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		res = malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
