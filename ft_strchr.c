/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:43:02 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/10 11:36:57 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && (unsigned char)c != *str)
	{
		str++;
	}
	if ((unsigned char)c == *str)
	{
		return ((char *)str);
	}
	else
	{
		return (0);
	}
}
