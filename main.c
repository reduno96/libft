#include "libft.h"
#include <stdio.h>
int main()
{
    char str[] = "12345";
    char ty[] = "12345";
    ft_memcpy(str+2, str, 3);
    ft_memmove(ty+2, ty, 3);
    printf("str= %s \n", str);
    printf("str= %s", ty);
}
