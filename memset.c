/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:52:16 by motivred          #+#    #+#             */
/*   Updated: 2023/10/21 21:14:50 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n--)
	{
		*str++ = (unsigned char)c;
	}
	return (s);
}

// int main(void)
// {
// 	// char str[20] = "redouane el morabet";
// 	// char des = 50;
// 	// ft_memset(str + 13, des, 3 * sizeof(char));
// 	// printf("%s", str);

// 	int str[20];
// 	for (int i = 0; i < 20; i++)
// 	{
// 		str[i] = i; // You can use any formula or values you want
// 	}
// 	printf("\n");
// 	for (int i = 0; i < 20; i++)
// 	{
// 		printf("myArray[%d] = %d\n", i, str[i]);
// 	}
// 	printf("\n");
// 	int des = -1;
// 	ft_memset(str + 13, des, 4);
// 	for (int i = 0; i < 20; i++)
// 	{
// 		printf("myArray[%d] = %d\n", i, str[i]);
// 	}
// }
