/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:37:22 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/11 11:40:49 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	d;
	int		i;

	d = (char)c;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == d)
			return ((char *)str + i);
		i--;
	}
	if (d == '\0')
		return ((char *)str + i);
	return (0);
}
