/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:42:24 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/06 13:21:42 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totalLen;
	char	*out;

	totalLen = ft_strlen(s1) + ft_strlen(s2);
	out = malloc((totalLen + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	ft_strlcpy(out, s1, ft_strlen(s1) + 1);
	ft_strlcat(out, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (out);
}
