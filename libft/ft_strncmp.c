/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:11:18 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 12:16:37 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t idx;
	idx = 0;

	while (s1[idx] && s2[idx] && idx < n - 1 && s1[idx] == s2[idx])
		idx++;
	return ((UCHR)s1[idx] - (UCHR)s2[idx]);
}