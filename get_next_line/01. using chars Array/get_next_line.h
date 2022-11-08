/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:30:35 by melmhass          #+#    #+#             */
/*   Updated: 2022/11/06 12:30:35 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	includes(char c, char *s);

size_t	length(const char *s);

char	*concatstr(char *s1, char *s2);

char	*dupstr(const char *s);

char	*get_next_line(int fd);

void	zero_fill(char *str, size_t size);

#endif /* GET_NEXT_LINE_H */