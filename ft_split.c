/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Red-Mor <reduno96@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:03:13 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/21 15:43:30 by Red-Mor          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static int	count_world(char const	*s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}
static int	len_world(char const *s, char c)
{
	int	i;
	int	len_world;

	len_world = 0;
	i = 0;

	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			len_world++;
			i++;
		}

		return (len_world);
	}
	return (0);
}

static char **fill_str(char const *s, char c, char **str)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && *s)
		{
			str[i] = malloc (len_world(s, c) + 1);
			if (!str[i])
				return (NULL);
			j = 0;
			while (*s != c && *s)
			{
				str[i][j++] = *s;
				s++;
			}
			str[i++][j] = '\0';
		}
		while (*s == c && *s)
			s++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**str;
	int		i;
	int		j;

	i = 0;
	if (!s)
		return (NULL);
	count = count_world(s, c);
	str = (char **) malloc((count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = fill_str(s, c, str);
	str[i] = NULL;
	return (str);
}
