/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:03:48 by lbaumann          #+#    #+#             */
/*   Updated: 2023/06/02 11:22:11 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * before: --NODE-->NEXT-->
 * after: -->NODE-->NEW-->NEXT-->
*/
void	ft_lstadd_insert(t_list *node, t_list *new)
{
	t_list  *next;

	if (!node || !new)
		return ;
	next = node->next;
	node->next = new;
	new->next = next;
}