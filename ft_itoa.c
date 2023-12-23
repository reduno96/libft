#include "libft.h"

static int ft_len_int(int n)
{
    int count; 
    long long_number;

    count = 0;
    long_number = n;
    if (long_number < 0)
    {
        long_number = -long_number;
        count++;        
    }
    if (long_number == 0)
        return (++count);
    while (long_number)
    {
        long_number = long_number / 10;
        count++;
    }
    return (count);
}

char *ft_itoa(int n)
{
    char *str;
    int i;
    long    long_number;

    long_number = n;
    i = ft_len_int(n);
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (!str)
        return (NULL);
    str[i--] = '\0';
    if (long_number == 0)
        str[0] = '0';
    if (long_number < 0)
    {
        str[0] = '-'; 
        long_number = -long_number;
    }
    while(long_number)
    {
        str[i--] = (long_number % 10) + '0';
        long_number = long_number / 10;
    }
    return (str);
}


#include <stdio.h>

int main(void)
{
    char *str;

    str = ft_itoa(123456);
    printf("123456 as a string: %s\n", str);
    free(str);

    str = ft_itoa(-123456);
    printf("-123456 as a string: %s\n", str);
    free(str);

    str = ft_itoa(0);
    printf("0 as a string: %s\n", str);
    free(str);

    str = ft_itoa(-2147483648);
    printf("-2147483648 as a string: %s\n", str);
    free(str);

    return 0;
}