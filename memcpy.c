/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:15:51 by motivred          #+#    #+#             */
/*   Updated: 2023/10/25 06:51:50 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *pdest;
    const char *psrc;

    pdest = dest;
    psrc = src;
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
//     char *src = "redouane  ";
//     char dest[20] = "el morabet";
//     int num = 3;

//     ft_memcpy(dest, src, num);
//     printf("%s", dest);
// }
