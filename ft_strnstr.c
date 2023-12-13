/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 20:51:21 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/12 22:58:16 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hs;
	char	*nd;
	size_t	i;
	size_t	lends;

	hs = (char *) haystack;
	nd = (char *) needle;
	i = 0;
	lends = ft_strlen(nd);
	if (nd[i] == '\0')
		return (hs);
	if (hs[i] == '\0' || len <= 0)
		return (NULL);
	while (hs[i] && (i + lends) <= len)
	{
		if (ft_strncmp((hs + i), nd, lends) == 0)
			return (hs + i);
		i++;
	}
	return (0);
}
