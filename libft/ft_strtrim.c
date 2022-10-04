/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:26:55 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 17:32:49 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int	isin(const char *str, char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

static int	last_accur_index(char *str, char *set, int radix)
{
	int	len;
	int	idx;

	idx = 0;
	len = (int)ft_strlen(str);
	if (radix > 0)
		while (str[idx] != '\0')
			if (!isin(set, str[idx++]))
				return (--idx);
	if (radix < 0)
		while (len-- > 0)
			if (!isin(set, str[len]))
				return (len);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_index;
	int		end_index;
	int		len;
	int		idx;
	char	*out;

	start_index = last_accur_index((char *)s1, (char *)set, 1);
	end_index = last_accur_index((char *)s1, (char *)set, -1);
	len = end_index - start_index + 1;
	idx = 0;
	out = malloc(sizeof(char) * (len + 1));
	if (out == NULL)
		return (NULL);
	while (start_index <= end_index)
		out[idx++] = s1[start_index++];
	out[idx] = '\0';
	return (out);
}
