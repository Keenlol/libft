
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (!lst || !(del))
		return ;
	while (current)
	{
		current = (*lst)->next;
		(*del)(*lst);
		*lst = current;
	}
	free(*lst);
	*lst = NULL;
}
