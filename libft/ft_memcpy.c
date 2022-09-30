/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:29:57 by melmhass          #+#    #+#             */
/*   Updated: 2022/09/30 15:25:52 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		i;

	if(dst == NULL) return NULL;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i++ < n)
		*d++ = *s++;
	return (dst);
}
