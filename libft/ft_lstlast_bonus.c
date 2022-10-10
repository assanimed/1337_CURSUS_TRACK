/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:23:14 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/10 11:08:47 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current)
	{
		if (!current -> next)
			return (current);
		current = current -> next;
	}
	return (lst);
}

/* #include <stdio.h>
int main()
{
	t_list *a,  *b, *c;
	a = ft_lstnew("MED");
	b = ft_lstnew("Ahmed");
	c = ft_lstnew("1337");
	a->next = c;
	c->next = b;
	b -> next = NULL;


	t_list *LAAAST =  ft_lstlast(a);

	printf("VALUE: %s \n", LAAAST->content);

	return 0;
} */