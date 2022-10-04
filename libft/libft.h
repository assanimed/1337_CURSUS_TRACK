/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:50:10 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 21:43:44 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void 	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*calloc(size_t count, size_t size);
char 	*ft_strdup(const char *s);
int 	ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
int 	ft_atoi(const char *str);
char	*ft_strtrim(char const *s1, char const *set);
char 	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char 	*ft_strjoin(char const *s1, char const *s2);
#endif