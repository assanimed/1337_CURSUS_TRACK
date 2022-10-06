/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:28:27 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 15:14:32 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		idx;
	long	nb;

	idx = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(str[idx]))
		idx++;
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign = -1;
		idx++;
	}
	while (ft_isdigit(str[idx]))
		nb = (nb * 10) + str[idx++] - '0';
	return (nb * sign);
}
