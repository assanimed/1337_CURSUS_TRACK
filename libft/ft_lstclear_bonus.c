/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 21:07:25 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/10 10:30:43 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*current;

	if (!lst)
		return ;
	if (*lst)
	{
		current = *lst;
		while (current)
		{
			tmp = current->next;
			ft_lstdelone(current, del);
			current = tmp;
		}
		*lst = NULL;
	}
}
