/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:36:32 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 18:47:10 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		idx;
	char	*out;
	int		i;

	idx = 0;
	i = start;
	out = malloc(sizeof(char) * (int)len + 1);
	if (!s || start > ft_strlen(s))
		return (out);
	if (!out)
		return (NULL);
	while (s[i] && i < (int)start + (int)len && start < (unsigned int)len)
		out[idx++] = s[i++];
	out[idx] = '\0';
	return (out);
}
