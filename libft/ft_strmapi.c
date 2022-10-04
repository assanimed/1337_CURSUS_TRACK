/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 19:06:06 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 19:25:07 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int idx;
	int len;
	char *out;

	idx = 0;
	len = (int) ft_strlen(s);

	out = malloc(sizeof(char) * (len + 1));
	if(!out)
		return (NULL);
	while(s[idx])
	{
		out[idx] = (*f)(idx, s[idx]);
		idx++;
	}
	out[idx] = '\0';
	return (out);
}

char riseUp(unsigned int i, char a)
{
	(void) i;
	return ft_toupper(a);
}
#include <stdio.h>
int main()
{

	char a[] = "hassan m9aweed";
	char *back = ft_strmapi(a, riseUp);

	printf("Hey: %s \n", back);

	return (0);
}