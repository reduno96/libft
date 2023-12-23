
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
/* #include <stdio.h>
#include <ctype.h>

void upper_at_odd_index(unsigned int index, char *c)
{
    if (index % 2 != 0)
        *c = toupper(*c);
}

int main(void)
{
    char s[] = "hello, world!";
    ft_striteri(s, upper_at_odd_index);
    printf("%s\n", s);

    return 0;
} */