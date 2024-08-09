/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhour <obouhour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 22:21:27 by obouhour          #+#    #+#             */
/*   Updated: 2024/07/22 00:28:33 by obouhour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*get_next_line(int fd);
int		ft_strlen(char *s);
int		ft_strlcpy(char *dest, char *src, int len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strncpy(char *dest, char *src, char n);
int		ft_get_strchr(char *str, char search);

#endif
