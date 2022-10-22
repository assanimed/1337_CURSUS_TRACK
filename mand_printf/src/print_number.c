/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:30:29 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/22 16:21:26 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	put_nbr_u(unsigned int nb, unsigned int base, char *range)
{
	int	count;

	count = 0;
	if (nb <= (base - 1))
	{
		count += put_char(range[nb]);
	}
	else
	{
		count += put_nbr_u(nb / base, base, range);
		count += put_nbr_u(nb % base, base, range);
	}
	return (count);
}

int	put_nbr_int(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		count += put_char('-');
		nb = -nb;
	}
	if (nb <= 9 && nb >= 0)
	{
		count += put_char(nb + '0');
	}
	else if (nb > 9)
	{
		count += put_nbr_int(nb / 10);
		count += put_nbr_int(nb % 10);
	}
	return (count);
}

int	put_nbr_long(unsigned long nb, unsigned long base, char *range)
{
	int	count;

	count = 0;
	if (nb <= (base - 1) && nb >= 0)
	{
		count += put_char(range[nb]);
	}
	else
	{
		count += put_nbr_long(nb / base, base, range);
		count += put_nbr_long(nb % base, base, range);
	}
	return (count);
}

int	print_number(va_list args, char spec)
{
	int	len;

	len = 0;
	if (spec == 'u')
		len = put_nbr_u(va_arg(args, unsigned int), 10, "0123456789");
	if (spec == 'p')
	{
		len += put_str("0x");
		len += put_nbr_long(va_arg(args, unsigned long), 16,
				"0123456789abcdef");
	}
	if (spec == 'x')
		len += put_nbr_u(va_arg(args, unsigned int), 16, "0123456789abcdef");
	if (spec == 'X')
		len += put_nbr_u(va_arg(args, unsigned int), 16, "0123456789ABCDEF");
	if (includes("di", spec))
		len += put_nbr_int(va_arg(args, int));
	return (len);
}
