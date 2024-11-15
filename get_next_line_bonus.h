/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ader <ader@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:26:47 by risattou          #+#    #+#             */
/*   Updated: 2024/11/15 22:53:44 by ader             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char	*get_next_line(int fd);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *str, unsigned int start, size_t len);
int		ft_strchr(const char *str, int c);
char	*ft_help(char **all);
size_t	ft_home(char **all, char *buff);
char	*ft_zero(char **all, char **buff);
char	*read_line(int fd, char **all, char *buff);

#endif