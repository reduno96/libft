/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:37:22 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/13 21:17:06 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	d;
	int		i;

	d = (char)c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == d)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
