/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:31:09 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/04/17 19:53:05 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* from : <ctype.h>
 * Desc : checks if the int passed to it represents an alphabet or a digit.
*/
int	ft_isalnum(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z') \
			|| (n >= '0' && n <= '9'))
	{
		return (1);
	}
	return (0);
}
