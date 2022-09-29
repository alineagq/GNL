/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:46:43 by coder             #+#    #+#             */
/*   Updated: 2022/09/28 13:43:29 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&((char *)s)[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = 0;
	len_s2 = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	if (s1)
	{
		while (s1[len_s1])
		{
			ptr[len_s1] = s1[len_s1];
			len_s1++;
		}
	}
	while (s2[len_s2])
	{
		ptr[len_s1 + len_s2] = s2[len_s2];
		len_s2++;
	}
	ptr[len_s1 + len_s2] = '\0';
	free(s1);
	return (ptr);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < dstsize - 1)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
