/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:42:25 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 11:23:59 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t idx;
    UCHR *ss1;
	UCHR *ss2;

    ss1 = (UCHR *)s1;
    ss2 = (UCHR *)s2;

    idx = 0;

    while ( idx < n)
    {
        if (ss1[idx] != ss2[idx])
            return (ss1[idx] - ss2[idx]);
        idx++;
    }
    return (0);
}