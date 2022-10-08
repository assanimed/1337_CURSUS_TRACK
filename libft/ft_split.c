/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:20:50 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/08 14:22:37 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int	wordcount(char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i + 1] == '\0')
			break ;
		if (i == 0 && s[i] != c)
			count++;
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

void	move_index(char *s, char c, int *i)
{
	int	k;

	k = *i;
	while (s[k] && s[k] == c)
		k++;
	*i = k;
}

int	next_stop(char *s, char c, int i)
{
	int	k;

	k = i;
	while (s[k] && s[k] != c)
		k++;
	return (k);
}

char	*ge_next_string(char *s, int *i, int endIndex)
{
	int		k;
	int		idx;
	char	*dupstr;
	int		len;

	k = *i;
	len = (endIndex - *i) + 1;
	idx = 0;
	dupstr = (char *)malloc(sizeof(char) * len);
	while (k < endIndex)
	{
		dupstr[idx] = s[k];
		idx++;
		k++;
	}
	*i = k;
	dupstr[idx] = '\0';
	return (dupstr);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		windex;
	char	**out;
	char	*ss;
	int		stop_index;

	if (!str)
		return (0);
	windex = 0;
	i = 0;
	out = (char **)malloc(sizeof(char *) * (wordcount(str, c) + 1));
	if (!out)
		return (0);
	while (str[i] && windex < wordcount(str, c))
	{
		move_index(str, c, &i);
		stop_index = next_stop(str, c, i);
		ss = ge_next_string(str, &i, stop_index);
		out[windex] = ss;
		windex++;
	}
	out[windex] = 0;
	return (out);
}
