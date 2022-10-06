/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:18:28 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 14:42:42 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

#include <stdio.h>
#include <string.h>


char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;
    size_t j;
    const char *str;

    str = haystack;

    if(!needle)
        return ((char *)str);

    i = j = 0;
    while (str[i] && i < n)
    {
        j = 0;
        while (needle[j] && str[i+j] == needle[j] && (i+j) < n)
        {
            if (needle[j + 1] == '\0')
                return ((char *)(str + i));
            j++;
        }
        i++;
    }

    return (0);
}



int main()
{

    printf("Value: %s \n", strnstr("CASABLANCA", "", 3));

    return (0);
}