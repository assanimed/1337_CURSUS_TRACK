/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:40:35 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/08 11:42:08 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*outstr;
	size_t	length;

	length = ft_strlen(s) + 1;
	outstr = malloc(sizeof(char) * length);
	if (outstr == NULL)
		return (NULL);
	(void)ft_strlcpy(outstr, s, length);
	return (outstr);
}
