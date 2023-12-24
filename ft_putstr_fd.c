#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
    int i;
    if (!s)
        return ;
    i = 0;
    while (s[i])
    {
        ft_putchar_fd(s[i++], fd);
    }
}