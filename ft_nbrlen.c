/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliau <ncolliau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 14:49:02 by ncolliau          #+#    #+#             */
/*   Updated: 2014/12/29 19:58:48 by ncolliau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(long long nbr)
{
	size_t	length;

	if (nbr == -9223372036854775807 - 1)
		return (20);
	length = 0;
	if (nbr == 0)
		length = 1;
	else
	{
		while (nbr != 0)
		{
			nbr /= 10;
			length++;
		}
	}
	return (length);
}
