/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_2darray.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/12 11:42:31 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/12 12:42:09 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc_2darray(char **array, size_t columns, size_t rows)
{
	size_t	i;

	array = (char **)malloc(sizeof(char*) * rows);
	if (!array)
		return (NULL);
	i = 0;
	while (i < rows)
	{
		array[i] = (char *)malloc(sizeof(char) * columns);
		if (!array[i])
			return (NULL);
		i++;
	}
	return (array);
}
