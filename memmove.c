/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:15:51 by motivred          #+#    #+#             */
/*   Updated: 2023/10/26 15:49:19 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *pdest;
	unsigned char *psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (*pdest == '\0' || *psrc == '\0')
		return (NULL);
	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return dest;
}

// int main(void)
// {
// 	char *src = "redouane  ";
// 	char dest[20] = "el morabet";
// 	size_t num = 3;

// 	ft_memmove(dest, src, num);
// 	printf("%s", dest);
// }
