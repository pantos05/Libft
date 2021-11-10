/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforge <nforge@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:17:44 by nforge            #+#    #+#             */
/*   Updated: 2021/10/25 17:20:06 by nforge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char				neg;
	unsigned long long	num;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	neg = (*str == '-');
	if (*str == '+' || *str == '-')
		str++;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	if (num > MAX - 1 && neg == 1)
		return (0);
	if (num > MAX && neg == 0)
		return (-1);
	if (neg)
		return (-num);
	else
		return (num);
}
