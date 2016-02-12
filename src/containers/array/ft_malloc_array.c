/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 12:17:37 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/12 12:42:05 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc_array(char *array, size_t line)
{
	array = (char *)malloc(sizeof(char) * line);
	if (!array)
		return (NULL);
	return (array);
}
