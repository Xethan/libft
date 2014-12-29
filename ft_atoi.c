/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolliau <ncolliau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:57:01 by ncolliau          #+#    #+#             */
/*   Updated: 2014/12/29 18:58:53 by ncolliau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_number(const char *str, const char *cmp)
{
	size_t	signe;

	signe = 0;
	while (str[signe] == '0')
		signe++;
	if (ft_strlen(str) > ft_strlen(cmp) + signe)
		return (-1);
	else if (ft_strlen(str) == ft_strlen(cmp) + signe)
		return (ft_strcmp(cmp, str + signe));
	return (1);
}

int ft_atoi(const char *str)
{
	int i;
	int num;
	int signe;

	i = 0;
	num = 0;
	signe = 1;
	while (str[i] == '0' || ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		signe = (str[i] - 44) * -1;
		i++;
	}
	if (check_number(str + i, "2147483648") < 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + signe * (str[i] - '0');
		i++;
	}
	return (num);
}
