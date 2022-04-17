/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:46:09 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/17 19:46:46 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* from : <strings.h>
 * Desc : writes n zeroed bytes ('\0') to the string passed into it.
          in case of n = 0 : it would do nth.
*/
void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*ptr = '\0';
		ptr++;
		i++;
	}
}
