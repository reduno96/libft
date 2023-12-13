/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-mora <rel-mora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:52:29 by rel-mora          #+#    #+#             */
/*   Updated: 2023/12/12 19:44:48 by rel-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = '\0';

    if (ft_isalnum(ch)) {
        printf("%c is alphanumeric.\n", ch);
    } else {
        printf("%c is not alphanumeric.\n", ch);
    }

    ch = '5';

    if (ft_isalnum(ch)) {
        printf("%c is alphanumeric.\n", ch);
    } else {
        printf("%c is not alphanumeric.\n", ch);
    }

    ch = '@';

    if (ft_isalnum(ch)) {
        printf("%c is alphanumeric.\n", ch);
    } else {
        printf("%c is not alphanumeric.\n", ch);
    }

    return 0;
}
*/