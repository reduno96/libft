/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 12:41:58 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/25 20:11:24 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new || lst)
	{
		new->next = *lst;
		*lst = new;
	}
}

int main ()
{

	t_list *list, *list1, *list2, *newT;

	list = malloc (sizeof(t_list));
	list1 = malloc (sizeof(t_list));
	list2 = malloc (sizeof(t_list));
	newT = malloc (sizeof(t_list));

	newT->content= "New Head";
	newT->next = NULL;

	list->content = "head";
	list1->content = "node1";
	list2->content = "node2";
	list->next = list1;
	list1->next =  list2;
	list2->next = NULL;
 	 t_list *temp= list;
	while (temp!= NULL)
	{
		printf("%s \n",(char *)temp->content);
		temp= temp->next;
	}
	printf("------\n");
    ft_lstadd_front(&list,newT);

		 t_list *temp1= list;
	while (temp1 != NULL)
	{
		printf("%s \n",(char *)temp1->content);
		temp1= temp1->next;
	}
}