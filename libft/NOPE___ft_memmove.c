/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:11:53 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/02 16:34:34 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

/* void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *BACKUP;
	char *s;
	char *d;
	(void) len;

	s = (char *) src;
	d = (char *) dst;

	ft_bzero(BACKUP, len);

	ft_memcpy(BACKUP, s, sizeof(s));

	printf("BAk : %s \n", BACKUP);
	
	return BACKUP;
} */

int main()
{

	char a[5] = "HELLO";
	char b[5] = "";
	const int cp =(unsigned char)(b < a);

	printf("CP: %d \n", cp);


	return 0;

}