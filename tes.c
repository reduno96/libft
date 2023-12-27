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
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *temp;

    if (!lst || !f)
        return (NULL);
    new = NULL;
    while (lst != NULL)
    {
        temp = ft_lstnew(f(lst->content));
        if (!temp)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, temp);
        lst = lst->next;
    }
    return (new);
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