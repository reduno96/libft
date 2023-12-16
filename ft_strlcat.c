/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:59:38 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/15 21:22:40 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if ((dstsize <= lendst) || (dstsize == 0))
		return (dstsize + lensrc);
	i = 0;
	while (src[i] && i < dstsize - lendst - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

