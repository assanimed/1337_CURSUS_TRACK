/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:42:51 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/10 10:56:00 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!*lst)
		*lst = new;
	else
	{
		current = *lst;
		while (current -> next)
		{
			current = current -> next;
		}
		current -> next = new;
	}
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

	
	ft_lstadd_back(&a, ft_lstnew("LIFEHAX"));
	ft_lstadd_back(&a, ft_lstnew("SPHENX"));
	ft_lstadd_back(&a, ft_lstnew("KENTAKI"));
	ft_lstadd_back(&a, ft_lstnew("ARROMA"));

	t_list *LAAAST =  ft_lstlast(a);

	printf("VALUE: %s \n", LAAAST->content);

	return 0;
} */