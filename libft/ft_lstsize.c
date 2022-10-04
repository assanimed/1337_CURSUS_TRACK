
#include <stdlib.h>
#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list *head;
    int     idx;
    head = lst;
    idx = 1;
	if(!lst)
		return (0);

    while(head->next) {
        head = head -> next;
        idx++;
    };
    return (idx);
}