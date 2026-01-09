/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaby <ibaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:20:37 by ibaby             #+#    #+#             */
/*   Updated: 2024/06/09 23:30:22 by ibaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	len = i + j;
	if (len == 0)
		return (free((char *)s1), NULL);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcpy(str + i, s2);
	free((char *)s1);
	return (str);
}

char	*ft_strdup(const char *src)
{
	char	*str;
	int		size;

	if (!src)
		return (NULL);
	size = ft_strlen((char *)src) + 1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	ft_strcpy(str, src);
	return (str);
}

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (dst);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_nl(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
