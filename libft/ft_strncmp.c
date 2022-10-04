/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:11:18 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 22:11:41 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int idx;
    idx = 0;


    while(s1[idx] != '\0' && s2[idx] != '\0' && idx < (int)n)
    {
        if(s1[idx] != s2[idx])
            return (s1[idx] - s2[idx]);
        idx++;

    }
    return (s1[idx] - s2[idx]);
}