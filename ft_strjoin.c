/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:24:00 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/10 11:37:43 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n_str;
	int		i;
	int		j;

	n_str = (char *) malloc(ft_strlen (s1) + ft_strlen (s2) + 1);
	if (!s1 || !s2 || !n_str)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		n_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		n_str[i++] = s2[j++];
	}
	n_str[i] = '\0';
	return (n_str);
}
