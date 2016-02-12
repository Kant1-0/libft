/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 16:10:22 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/11 15:44:23 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	char	*ptr_str;
	int		result;

	result = 0;
	ptr_str = (char *)str;
	while (ft_isspace((int)*ptr_str) != 0)
		ptr_str++;
	sign = (*ptr_str == '-') ? -1 : 1;
	ptr_str = (*ptr_str == '+' || *ptr_str == '-') ? ptr_str + 1 : ptr_str;
	while (*ptr_str >= '0' && *ptr_str <= '9')
	{
		result = result * 10 + *ptr_str - 48;
		ptr_str++;
	}
	result *= sign;
	return (result);
}
