/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:41:28 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/11 22:46:07 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sone;
	unsigned char	*stwo;
	size_t			i;

	sone = (unsigned char *) s1;
	stwo = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (sone[i] == stwo[i])
			i++;
		else
			break ;
	}
	return (sone[i] - stwo[i]);
}
