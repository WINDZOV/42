/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkilosan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 12:03:10 by nkilosan          #+#    #+#             */
/*   Updated: 2026/02/02 14:21:04 by nkilosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*extract_line(char *stash)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!stash || !*stash)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = ft_substr(stash, 0, i);
	return (line);
}

static char	*update_stash(char *stash)
{
	size_t	i;
	size_t	len;
	char	*new_stash;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	i++;
	len = ft_strlen(stash + i);
	new_stash = ft_substr(stash, i, len);
	free(stash);
	return (new_stash);
}

static int	read_to_stash(int fd, char *buffer, char **stash)
{
	ssize_t	bytes;

	while (!ft_strchr(*stash, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (-1);
		if (bytes == 0)
			break ;
		buffer[bytes] = '\0';
		*stash = ft_strjoin(*stash, buffer);
		if (!*stash)
			return (-1);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*stash[MAX_FD];
	char		*buffer;
	char		*line;

	if (fd < 0 || fd >= MAX_FD || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (!stash[fd])
		stash[fd] = ft_strdup("");
	if (read_to_stash(fd, buffer, &stash[fd]) < 0)
	{
		free(buffer);
		free(stash[fd]);
		stash[fd] = NULL;
		return (NULL);
	}
	line = extract_line(stash[fd]);
	stash[fd] = update_stash(stash[fd]);
	free(buffer);
	return (line);
}
