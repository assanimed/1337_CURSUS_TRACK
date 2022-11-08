/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:35:49 by melmhass          #+#    #+#             */
/*   Updated: 2022/11/06 12:35:49 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	includes(char c, char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		if (s[i++] == c)
			return (1);
	return (0);
}

char	*concatstr(char *s1, char *s2)
{
	char	*out;
	size_t	total_len;
	size_t	idx[2];

	if (!s1)
		s1 = dupstr("");
	if (!s1 || !s2)
		return (NULL);
	idx[0] = 0;
	idx[1] = 0;
	total_len = length(s1) + length(s2);
	out = malloc((total_len + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	while (s1[idx[0]])
	{
		out[idx[0]] = s1[idx[0]];
		idx[0]++;
	}
	while (s2[idx[1]])
		out[idx[0]++] = s2[idx[1]++];
	out[idx[0]] = '\0';
	free(s1);
	return (out);
}

size_t	length(const char *s)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (*s++)
		len++;
	return (len);
}

char	*dupstr(const char *s)
{
	char	*outstr;
	size_t	len;
	size_t	i;

	i = 0;
	len = length(s) + 1;
	outstr = malloc(sizeof(char) * len);
	if (outstr == NULL)
		return (NULL);
	while (s[i])
	{
		outstr[i] = s[i];
		i++;
	}
	outstr[i] = '\0';
	return (outstr);
}

void	zero_fill(char *str, size_t size)
{
	while (size--)
		str[size] = 0;
}
