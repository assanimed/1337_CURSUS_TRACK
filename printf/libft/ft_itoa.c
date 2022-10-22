/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:14:13 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/08 11:10:10 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	digit_size(long nb)
{
	int	i;

	if (nb == 0)
		return (1);
	i = 0;
	if (nb < 0)
		i++;
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static	void	backwardinser(char *s, long nb, int len)
{
	char	nbchar;

	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	while (nb)
	{
		nbchar = nb % 10 + '0';
		nb /= 10;
		s[--len] = nbchar;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*outnbr;
	int		size;

	nb = n;
	size = digit_size(nb);
	outnbr = malloc(sizeof(char) * (size + 1));
	if (nb == 0)
	{
		outnbr[0] = '0';
		outnbr[1] = '\0';
		return (outnbr);
	}
	if (!outnbr)
		return (NULL);
	backwardinser(outnbr, nb, size);
	outnbr[size] = '\0';
	return (outnbr);
}
