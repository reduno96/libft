/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:50:49 by rel-mora          #+#    #+#             */
/*   Updated: 2024/01/09 13:05:54 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	t_list	*modified;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	temp = lst;
	new_lst = NULL;
	while (temp != NULL)
	{
		new_content = f(temp->content);
		modified = ft_lstnew(new_content);
		/* if (!modified)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		} */
		ft_lstadd_back(&new_lst, modified);
		temp = temp->next;
	}
	return (new_lst);
}
