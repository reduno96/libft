/* #include "libft.h"
#include <stdio.h>

t_list *tf_lstnew (void *content)
{
    t_list  *new;
    new = malloc (sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
t_list *tf_lastnode(t_list *head)
{
    t_list *temp;
    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    return (temp);

}
void tf_lstadd_back(t_list **head, t_list *node)
{
    t_list *last;
    if (*head == NULL)
        *head = node;
    else
    {
        last = tf_lastnode(*head);
        last->next = node;
    }
}
void tf_printlst(void *content)
{
    printf("node = %s\n", content);
}

void tf_lsiteri(t_list *head, void (*f)(void *))
{
    while (head->next != NULL)
    {
        f(head->content);
        head = head->next;
    }
}

void *touper(void *content)
{
    int i = 0;
    char *str = (char *) content;
    char *mode = ft_strdup(str);

    while(mode[i])
    {
        mode = ft_toupper(mode[i]);
        i++;
    }
}

void tf_delete (void *content)
{
    free(content);
}

void tf_lstdelone(t_list *head, void (*del)(void *))
{
    del(head->content);
    free(head);
}
t_list tf_lstcear(t_list **head, void (*del)(void *))
{
    t_list *temp = *head;
    while (temp != NULL)
    {
        del(temp);
        temp = temp->next;
    }
}
t_list *tf_lstmapi(t_list *head, void *(*f)(void *), void (*del)(void *))
{
    void *modifi;
    t_list *temp;
    t_list *new_node;

    temp = head;

    while (temp->next != NULL)
    {
        modifi = f(temp->content);
        new_node = tf_lstnew(modifi);


        temp = temp->next;
    }
    return ;
}
int main()
{
    t_list * head = tf_lstnew(ft_strdup("head"));
    t_list * node1 = tf_lstnew(ft_strdup("node1"));
    t_list * node2 = tf_lstnew(ft_strdup("node2"));
    t_list * node3 = tf_lstnew(ft_strdup("node3"));
    t_list * node4 = tf_lstnew(ft_strdup("node4"));

    tf_lstadd_back(&head, node1);
    tf_lstadd_back(&head, node2);
    tf_lstadd_back(&head, node3);
    tf_lstadd_back(&head, node4);

    tf_lsiteri(head,tf_printlst);

    tf_lstmapi(head, touper, del);



}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assuming that your t_list structure is defined as follows:
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
t_list    *ft_lstnew(void *content)
{
    t_list    *new_node;

    new_node = malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}
// Your ft_lstmap function goes here...
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
void *to_uppercase(void *content)
{
    char *str = (char *)content;
    char *new_str = strdup(str);
    for (int i = 0; new_str[i]; i++)
    {
        new_str[i] = ft_toupper(new_str[i]);
    }
    return new_str;
}

void delete(void *content)
{
    free(content);
}

void print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%s\n", (char *)lst->content);
        lst = lst->next;
    }
}
t_list *ft_lstlast(t_list *lst)
{
    t_list *last;

    last = lst;
    if (!lst)
        return (NULL);
    while(last->next != NULL)
        last = last->next;
    return (last);
}
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    if (!lst || !new)
        return ;
    if (*lst == NULL)
        *lst = new;
    else
    {
    last = ft_lstlast(*lst);
    last->next = new;
    }

}
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;


    if (!lst || !del)
        return ;
   while (*lst != NULL)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
}
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	void	*modified;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst != NULL)
	{
		modified = f(lst->content);
		temp = ft_lstnew(modified);
		if (!temp)
		{
			del(modified);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}


int main()
{
    t_list *lst = NULL;
    t_list *new_lst = NULL;
    char *value = NULL ;
    char *values[] = {"one", "two", "three"};

    for (int i = 0; i < 3; i++)
    {
        value = strdup(values[i]);
        t_list *node = ft_lstnew(value);
        ft_lstadd_back(&lst, node);
    }

    new_lst = ft_lstmap(lst, to_uppercase, delete);


    ft_lstclear(&lst, delete);
    ft_lstclear(&new_lst, delete);
    print_list(new_lst);

    return 0;
}
 */