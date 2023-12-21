/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:46:11 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/21 22:57:27 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_iset(char const  *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			i++;
		else
			return (1);
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
	while (s1[i]&& ft_iset(s1, set[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_iset(s1, set[j]))
		j--;
	k = j - i;
	return (ft_substr(s1, i, k));
}
/* char *ft_strtrim(char const *s1, char const *set)
{
    size_t start, end, len;

    if (!s1 || !set)
        return NULL;

    start = 0;
    while (s1[start] && strchr(set, s1[start]))
        start++;

    end = strlen(s1);
    while (end > start && strchr(set, s1[end - 1]))
        end--;

    len = end - start;
    return strndup(s1 + start, len);
} */