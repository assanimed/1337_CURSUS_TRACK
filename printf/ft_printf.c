/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:25:30 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/20 22:44:26 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

/* static void handler(char *rest, va_list args) */

int parse_string(const char *format, va_list args)
{
    int i;
    int len;
    
    i = 0;
    len = 0;
    (void) args;
    while(format[i])
    {
        if(format[i] == '%' && includes(format[i+1], "cspdiuxX%"))
        {
            if(format[i+1] == 'c')
            {
                len += put_char(va_arg(args, int));
                i += 2;
            }
            i++;
        }
        else
        {
            len += put_char(format[i]);
            i++;
        }
        
    }
    
    return (len);
}


int ft_printf(const char *format, ...)
{

    int len = 0;

    va_list args;

    va_start(args, format);

    len = parse_string(format, args);

    va_end(args);

    return (len);
}