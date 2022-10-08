/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:36:32 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/08 10:52:41 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		idx;
	char		*out;
	size_t		i;
	size_t		strt;

	strt = start;
	idx = 0;
	i = start;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		out = malloc(sizeof(char) * (ft_strlen(s) + 1));
	else
		out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	if (start > ft_strlen(s))
		return (out);
	while (s[i] && i < start + len && start < len)
		out[idx++] = s[i++];
	out[idx] = '\0';
	return (out);
}
