/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:35:13 by motivred          #+#    #+#             */
/*   Updated: 2023/10/24 21:02:33 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *str;

	str = s;
	while (n)
	{
		*str++ = (unsigned char)c;
		n--;
	}
	return (s);
}

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main()
// {
// 	char str[20] = "redouane el morabet";
// 	bzero(str + 13, 7);
// 	printf("%s", str);
// }
