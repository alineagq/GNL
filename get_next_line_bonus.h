/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:46:35 by coder             #+#    #+#             */
/*   Updated: 2022/09/28 13:57:10 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define SIZE_MAX 2147483647

size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*alloc_buffer(int fd, char *buffer);
char	*alloc_line(char *buffer);
char	*update_buffer(char *buffer);
char	*get_next_line(int fd);

#endif