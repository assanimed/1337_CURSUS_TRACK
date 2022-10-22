/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:06:06 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 22:21:58 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	int				len;
	char			*out;

	if (!s)
		return (NULL);
	idx = 0;
	len = (int)ft_strlen(s);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	while (s[idx])
	{
		out[idx] = (*f)(idx, s[idx]);
		idx++;
	}
	out[idx] = '\0';
	return (out);
}
