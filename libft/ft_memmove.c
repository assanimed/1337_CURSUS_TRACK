/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:57:34 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 10:01:25 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

void *ft_memmove(void *dst, void const *src, size_t n)
{
    UCHR *d;
    const UCHR *s;
    if (!dst && !src)
        return (dst);
    d = dst;
    s = src;

    if (src > dst)
        ft_memcpy(d, s, n);
    if (src < dst)
        while (n--)
            *(d + n) = *(s + n);
    return (dst);
}