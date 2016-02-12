/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circlst_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 14:40:46 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/11 15:43:31 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_circlst	*ft_circlst_create(void)
{
	t_circlst	*racine;

	racine = (t_circlst *)malloc(sizeof *racine);
	if (racine != (t_circlst *)NULL)
	{
		racine->prev = racine;
		racine->next = racine;
	}
	return (racine);
}
