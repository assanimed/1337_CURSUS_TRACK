/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmhass <melmhass@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:09:15 by melmhass          #+#    #+#             */
/*   Updated: 2022/10/04 22:16:50 by melmhass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *node;
    node = malloc(sizeof(t_list));
	if(!node)
		return (NULL);
    node -> content = content;
    node -> next = NULL;

    return (node);
}