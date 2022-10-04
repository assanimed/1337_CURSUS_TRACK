/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:42:24 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 21:43:33 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int totalLen = (int) ft_strlen(s1) + (int) ft_strlen(s2);
    int idx;
    int iter;
    char *out;

    idx = 0;
    iter = 0;
    out = malloc( (totalLen + 1) * sizeof(char));
    if(out == NULL)
        return (NULL);
    while(s1[iter] != '\0')
        out[idx++] = s1[iter++];
    iter = 0;
    while(s2[iter] != '\0')
        out[idx++] = s2[iter++];
    out[idx] = '\0';

    return (out);
}
