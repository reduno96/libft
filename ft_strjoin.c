/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:48:18 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/18 18:39:19 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	lens1;
	size_t	lens2;
	size_t	tlen;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	tlen = (lens1 + lens2);
	d = (char *) malloc((tlen + 1) * sizeof(char));
	if (!d)
		return (NULL);
	ft_strlcpy(d, s1, (lens1 + 1));
	ft_strlcpy(d + lens1, s2, tlen + 1);
	return (d);
}
