/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:50:54 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/11 22:24:47 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	d;
	int		i;

	d = (char) c;
	i = 0;
	while (str[i])
	{
		if (str[i] == d)
			return ((char *) str + i);
		i++;
	}
	if (d == '\0')
		return ((char *) str + i);
	return (0);
}
