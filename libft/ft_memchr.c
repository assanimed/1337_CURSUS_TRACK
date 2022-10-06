/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:42:22 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 10:42:23 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    int idx;
    char *out;

    out = (char *)s;
    idx = 0;
    while (idx < (int)n)
    {
        if (*out == (char)c)
            return (out);
        idx++;
        out++;
    }

    return (NULL);
}