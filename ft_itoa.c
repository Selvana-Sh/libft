/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:00:03 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/10 11:34:26 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	get_int_size(int n)
{
	size_t			size;
	unsigned int	nbr;

	size = 1;
	if (n < 0)
	{
		nbr = -n;
		size++;
	}
	else
		nbr = n;
	while (nbr >= 10)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			size;
	unsigned int	nbr;

	size = get_int_size(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = 0;
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	while (size > 0)
	{
		str[--size] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
