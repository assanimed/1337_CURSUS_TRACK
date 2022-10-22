/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:34:56 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/08 20:28:37 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	idx;

	idx = 0;
	srclen = ft_strlen(src);
	if (n == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (n <= dstlen || !dst)
		return (srclen + n);
	while (src[idx] && (dstlen + idx) < n - 1)
	{
		dst[dstlen + idx] = src[idx];
		idx++;
	}
	dst[dstlen + idx] = '\0';
	return (dstlen + srclen);
}
