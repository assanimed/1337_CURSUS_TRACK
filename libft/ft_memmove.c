/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:11:53 by melmhass          #+#    #+#             */
/*   Updated: 2022/09/30 16:12:52 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void 	*ft_memmove(void *dst, const void *src, size_t len)
{
	char buffer[len];
	const char *s;
	size_t i;

	i = 0;
	s = (char * )src;

	while(i++<len)
		buffer[i-1] = s[i-1];
		
	i = 0;
	
	while(i++<len)
		((char *)dst)[i-1] = buffer[i-1];

	return (dst);
}