/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:58:58 by seongjko          #+#    #+#             */
/*   Updated: 2023/05/30 19:59:00 by seongjko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*line(char **rest, int fd);
char	*cut(char **rest, int new_pos, int i);
char	*ft_strrest(char *buff, int new_pos);
int		ft_strchr(const char *s, int c);
char	*ft_strndup(char *str, int len);
char	*ft_strjoin(char *dest, char *append);
size_t	ft_strlen(const char *str);

#endif 
