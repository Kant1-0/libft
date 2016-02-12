/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circlst_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qfremeau <qfremeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 16:27:32 by qfremeau          #+#    #+#             */
/*   Updated: 2016/02/11 15:43:29 by qfremeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_circlst_addprev(t_circlst *elem, void const *content, 
	size_t content_size)
{
	t_circlst	*new_elem;
	void		*ptr_content;

	ptr_content = ft_memalloc(content_size + 1);
	if (!ptr_content)
		return ;
	if (content == NULL)
	{
		ptr_content = NULL;
		content_size = 0;
	}
	else
		ptr_content = ft_memcpy(ptr_content, content, content_size);
	new_elem = (t_circlst *)ft_memalloc(sizeof(t_circlst));
	if (elem == (t_circlst *)NULL)
		elem = ft_circlst_create();
	if (new_elem != (t_circlst *)NULL)
	{
		new_elem->content = ptr_content;
		new_elem->prev = elem->prev;
		new_elem->next = elem;
		elem->prev->next = new_elem;
		elem->prev = new_elem;
	}
}

void	ft_circlst_addnext(t_circlst *elem, void const *content, 
	size_t content_size)
{
	t_circlst	*new_elem;
	void		*ptr_content;

	ptr_content = ft_memalloc(content_size + 1);
	if (!ptr_content)
		return ;
	if (content == NULL)
	{
		ptr_content = NULL;
		content_size = 0;
	}
	else
		ptr_content = ft_memcpy(ptr_content, content, content_size);
	new_elem = (t_circlst *)ft_memalloc(sizeof(t_circlst));
	if (elem == (t_circlst *)NULL)
		elem = ft_circlst_create();
	if (new_elem != (t_circlst *)NULL)
	{
		new_elem->content = ptr_content;
		new_elem->prev = elem;
		new_elem->next = elem->next;
		elem->next->prev = new_elem;
		elem->next = new_elem;
	}
}

void	ft_circlst_addhead(t_circlst *racine, void const *content, 
	size_t content_size)
{
	ft_circlst_addnext(racine, content, content_size);
}

void	ft_circlst_addtail(t_circlst *racine, void const *content, 
	size_t content_size)
{
	ft_circlst_addprev(racine, content, content_size);
}