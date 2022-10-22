/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:36:32 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/10 11:21:43 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	alloc_size(size_t start, size_t len, size_t slen)
{
	if ((start + len) <= slen)
		return (len + 1);
	return (slen - start + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	stop_index;
	size_t	sstart;
	size_t	indx;
	size_t	allocsize;
	char	*out;

	stop_index = len + start;
	sstart = start;
	indx = 0;
	if (s[0] == '\0' || start >= ft_strlen(s))
		return (ft_strdup(""));
	allocsize = alloc_size(sstart, len, ft_strlen(s));
	out = malloc(sizeof(char) * allocsize);
	if (!out)
		return (NULL);
	while (sstart < stop_index && s[sstart])
		out[indx++] = s[sstart++];
	out[indx] = '\0';
	return (out);
}
