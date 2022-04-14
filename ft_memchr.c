/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 13:47:06 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/10 11:34:38 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*sstr;

	sstr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (*sstr == (unsigned char)c)
		{
			return (sstr);
		}
		i++;
		sstr++;
	}
	return (NULL);
}
