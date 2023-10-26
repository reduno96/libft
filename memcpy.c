/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 22:15:51 by motivred          #+#    #+#             */
/*   Updated: 2023/10/26 21:44:46 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return (NULL);
    int i = 0;
    while (n--)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return dest;
}

int main()
{
    char *src = "ff";
    char dest[20] = "fd";
    size_t num = 3;

    ft_memcpy(dest, src, num);
    printf("%s", dest);
}