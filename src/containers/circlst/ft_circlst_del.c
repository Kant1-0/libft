/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circlst_del.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 16:48:59 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/11 15:43:26 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_circlst_del(t_circlst *list)
{
	t_circlst *nextone;
	t_circlst *it;

	it = list->next;
	while (it != list)
	{
		nextone = it->next;
		free(it);
		it = nextone;
	}
}

void	ft_circlst_free(t_circlst **list)
{
	ft_circlst_del(*list);
	free(*list);
	*list = NULL;
}
