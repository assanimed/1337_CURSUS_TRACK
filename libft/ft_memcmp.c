/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:42:25 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/08 11:43:05 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;
	t_uchr	*ss1;
	t_uchr	*ss2;

	ss1 = (t_uchr *)s1;
	ss2 = (t_uchr *)s2;
	idx = 0;
	while (idx < n)
	{
		if (ss1[idx] != ss2[idx])
			return (ss1[idx] - ss2[idx]);
		idx++;
	}
	return (0);
}
