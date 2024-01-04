/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:51:21 by rel-mora          #+#    #+#             */
/*   Updated: 2024/01/04 19:40:30 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*nd;
	size_t	i;
	size_t	length_needle;

	hs = (char *) haystack;
	nd = (char *) needle;
	i = 0;
	length_needle = ft_strlen(nd);
	if (nd[i] == '\0')
		return (hs);
	if (hs[i] == '\0' || len <= 0)
		return (NULL);
	while (hs[i] && (i + length_needle) <= len)
	{
		if (ft_strncmp((hs + i), nd, length_needle) == 0)
			return (hs + i);
		i++;
	}
	return (0);
}
