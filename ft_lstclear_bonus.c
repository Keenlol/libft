/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctongpa <ctongpa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:10:49 by ctongpa           #+#    #+#             */
/*   Updated: 2024/09/14 16:54:12 by ctongpa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*prev;

	if (!lst || !del)
		return ;
	prev = *lst;
	while (prev)
	{
		current = prev->next;
		ft_lstdelone(prev, del);
		prev = current;
	}
	*lst = NULL;
}
/*
{
	t_list	*current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		current = (*lst)->next;
		del(*lst);
		*lst = current;
	}
	free(*lst);
	*lst = NULL;
}
*/
