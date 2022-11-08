/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:28:32 by melmhass          #+#    #+#             */
/*   Updated: 2022/11/06 12:28:32 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*handle_line(char *allread, int readed)
{
	int		i;
	int		count;
	char	*out;

	count = 0;
	while (allread[count])
		if (allread[count++] == '\n')
			break ;
	if (count == 0 || readed < 0)
		return (NULL);
	out = malloc(sizeof(char) * (count + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (i < count)
	{
		out[i] = allread[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

void	fill_reserve(char reserved[BUFFER_SIZE], char *rchars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (rchars[i])
	{
		if (rchars[i++] == '\n')
			break ;
	}
	while (rchars[i])
	{
		reserved[j] = rchars[i];
		i++;
		j++;
	}
	reserved[j] = '\0';
}

char	*get_next_line(int fd)
{
	static char	reserved[BUFFER_SIZE];
	char		*rchars;
	char		*line;
	char		buf[BUFFER_SIZE + 1];
	int			readed;

	readed = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd == 1 || fd == 2)
		return (NULL);
	rchars = NULL;
	rchars = concatstr(rchars, reserved);
	zero_fill(reserved, BUFFER_SIZE);
	while (readed > 0 && !includes('\n', rchars))
	{
		readed = read(fd, buf, BUFFER_SIZE);
		if (readed == -1)
			break ;
		buf[readed] = '\0';
		rchars = concatstr(rchars, buf);
	}
	fill_reserve(reserved, rchars);
	line = handle_line(rchars, readed);
	free(rchars);
	return (line);
}
