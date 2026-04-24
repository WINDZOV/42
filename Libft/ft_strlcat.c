/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: NinaK <NinaK@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 23:45:32 by NinaK             #+#    #+#             */
/*   Updated: 2025/12/23 23:45:32 by NinaK            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while ((dst_len + i + 1) < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < size)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	char	buffer[20] = "Hello ";
	size_t	ret;

	ret = ft_strlcat(buffer, "World!", sizeof(buffer));

	printf("Result string: \"%s\"\n", buffer);
	printf("Returned value: %zu\n", ret);

	return (0);
}*/
