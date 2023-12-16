
#include "libft.h"

	int main()
	{
		char *s1;
        char *s2;
        s1 = malloc(6);
        s1[0] ='H';
        s1[1] ='E';
        s1[2] ='L';
        s1[3] ='L';
        s1[4] ='O';
        s1[5] ='\0';
        s2 = malloc(6);
        s2[0] ='H';
        s2[1] ='E';
        s2[2] ='L';
        s2[3] ='L';
        s2[4] ='O';
        s2[5] ='\0';

        int x=ft_strlcat(s1, s2, 3);
		printf("%d\n",x );
	}
