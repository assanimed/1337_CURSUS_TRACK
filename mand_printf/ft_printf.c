/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:36:01 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/22 16:02:06 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	handleconv(char spec, va_list args, int *len)
{
	if (spec == 'c')
		*len += put_char(va_arg(args, int));
	if (spec == '%')
		*len += put_char('%');
	if (includes("duxXpi", spec))
		*len += print_number(args, spec);
	if (spec == 's')
		*len += put_str(va_arg(args, char *));
}

int	parse_string(const char *format, va_list args)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (1)
	{
		if (!format[i])
			break ;
		if (format[i] == '%')
		{
			if (includes("cspdiuxX%", format[i + 1]))
			{
				handleconv(format[i + 1], args, &len);
				i += 2;
			}
			else
				i++;
		}
		else if (format[i] != '%')
			len += put_char(format[i++]);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, format);
	len = parse_string(format, args);
	va_end(args);
	return (len);
}
