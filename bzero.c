/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motivred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:35:13 by motivred          #+#    #+#             */
/*   Updated: 2023/10/19 17:45:41 by motivred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.c>

void ft_memset(void *s, int c, size_t n)
{
	char *str = s;


	return str;
}

int main ()
{
	char str [20] = "redouane el morabet";
	char des = '.';
	ft_bzero(str + 13, des, 3*sizeof(char)); 
	printf("%s", str);

}
