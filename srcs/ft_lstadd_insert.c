/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:03:48 by lbaumann          #+#    #+#             */
/*   Updated: 2023/06/02 12:00:54 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * before: PREV-->NODE-->NEXT-->
 * after: -->PREV-->NEW-->NODE-->NEXT-->
*/
void	ft_lstadd_insert(t_list *lst, t_list *node, t_list *new)
{
	t_list  *prev;

	if (!node || !new)
		return ;
	prev = ft_lstfindprev(lst, node);
	prev->next = new;
	new->next = node;
}