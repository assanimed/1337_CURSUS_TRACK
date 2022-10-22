/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:08:53 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/22 16:09:53 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int	ft_printf(const char *format, ...);
int	parse_string(const char *format, va_list args);

int	put_char(char c);
int	put_str(char *s);

int	includes(char *s, char c);

int	print_number(va_list args, char spec);
int	put_nbr_int(int nb);
int	put_nbr_long(unsigned long nb, unsigned long base, char *range);
int	put_nbr_u(unsigned int nb, unsigned int base, char *range);

#endif /* FT_PRINTF_H */
