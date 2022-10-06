/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:08:22 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 09:33:43 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t n)
{
    size_t src_len;
    size_t idx;

    idx = 0;
    src_len = ft_strlen(src);
	if(n == 0)
		return (src_len);
    while (src[idx] && idx < n - 1)
    {
        dst[idx] = src[idx];
        idx++;
    }
    dst[idx] = '\0';
    return (src_len);
}
