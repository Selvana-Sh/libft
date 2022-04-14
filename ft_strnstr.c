/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:53:12 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/10 11:40:03 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	i = 0;
	s2_len = ft_strlen(ndl);
	if (!s2_len)
		return ((char *)hay);
	if (len != 0)
	{
		while (hay[i] && i <= len - s2_len)
		{
			j = 0;
			while (ndl[j] && ndl[j] == hay[i + j])
				j++;
			if (j == s2_len)
				return ((char *)&hay[i]);
			i++;
		}
	}
	return (NULL);
}
