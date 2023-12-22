/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:46:11 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/22 15:41:11 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_iset(char const  *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);

}

char	*ft_strtrim(char const *s1, char const *set)\
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i]&& ft_iset(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_iset(set, s1[j]))
		j--;
	k = j- i + 1;
	return (ft_substr(s1, i, k));
}
