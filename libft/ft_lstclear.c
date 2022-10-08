/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:07:25 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/08 21:49:05 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;
	t_list *prev;
	
	if(*lst && del)
	{
		current = *lst;
		while(current)
		{
			prev = current;
			del(prev);
			free(prev);
			current = prev -> next;
		}
	}
	*lst = NULL;
}