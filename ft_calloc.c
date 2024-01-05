/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:12:25 by rel-mora          #+#    #+#             */
/*   Updated: 2024/01/05 18:13:45 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	len;

	len = count * size;
    if (count != 0 && (len / count) < size)
		return (NULL);
	memory = (void *)malloc(count * size);
	if (!memory)
		return (NULL);
	ft_bzero(memory, len);
	return (memory);
}
