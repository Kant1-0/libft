/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circlst_delone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 16:34:45 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/11 15:43:23 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_circlst_delone(t_circlst *elem)
{
	elem->prev->next = elem->next;
	elem->next->prev = elem->prev;
	free(elem);
}

void	ft_circlst_delhead(t_circlst *racine)
{
	if (racine->next != racine)
		ft_circlst_delone(racine->next);
}

void	ft_circlst_deltail(t_circlst *racine)
{
	if (racine->prev != racine)
		ft_circlst_delone(racine->prev);
}
