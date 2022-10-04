/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:08:22 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/02 08:47:24 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t srclen;
	size_t i;

	i = 0;
	srclen = ft_strlen(src);
	while(i++ < dstsize - 1 )
		*dst++ = *src++;
	*dst++ = '\0';

	return (srclen);
}
