/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 23:08:31 by qfremeau          #+#    #+#             */
/*   Updated: 2015/12/02 14:57:25 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*ptr_str;

	ptr_str = (char *)str;
	while (*ptr_str != c)
	{
		if (*ptr_str == '\0')
			return (NULL);
		ptr_str++;
	}
	return (ptr_str);
}
