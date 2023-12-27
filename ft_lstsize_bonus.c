/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:34:55 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/27 20:19:30 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
// #include <stdio.h>
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/* 

int main(void)
{
    // Create a new node with content "Node 1"
    char *content1 = "Node 1";
    t_list *node1 = ft_lstnew(content1);

    // Create a new node with content "Node 2"
    char *content2 = "Node 2";
    t_list *node2 = ft_lstnew(content2);

    // Create a new node with content "Node 3"
    char *content3 = "Node 3";
    t_list *node3 = ft_lstnew(content3);

    // Create a linked list and add nodes to the front
    t_list *list = NULL;

    // Add nodes to the front of the list
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);

    // Print the size of the list
    printf("Size of the list: %d\n", ft_lstsize(list));

    // Free the memory allocated for the nodes

    return 0;
}
 */