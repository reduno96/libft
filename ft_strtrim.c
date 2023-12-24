/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:40:57 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/24 19:46:31 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_iset(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_iset(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_iset(set, s1[j]))
		j--;
	k = j - i + 1;
	return (ft_substr(s1, i, k));
}
