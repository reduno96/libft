/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:32:34 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/12 19:53:21 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t len)
{
	unsigned char	*s;
	unsigned char	d;
	size_t			i;

	d = (unsigned char ) c;
	i = 0;
	s = (unsigned char *) src;
	while (i < len)
	{
		if (s[i] == d)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = NULL;
    char search_char = 'o';

    // Search for the first occurrence of 'o' in str
    const char *result = ft_memchr(str, search_char, strlen(str));

    if (result != NULL) {
        printf("Found '%c' at position %ld.\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string.\n", search_char);
    }

    return 0;
}*/