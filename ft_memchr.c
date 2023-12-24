/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:32:34 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/24 18:29:10 by rel-mora         ###   ########.fr       */
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
