/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:25:30 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/20 20:25:40 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_spec_info	t_spec_info;

struct s_spec_info{
	int	age;
};

int		ft_printf(const char *format, ...);
int		parse_string(const char *format, va_list args);
int		put_char(char c);
int		put_str(char *s);
int		digit_size(long nb);
void	put_nbr(long nb, long base, char *basechar);

int		includes(int c, char *str);

#endif /* FT_PRINTF_H */
