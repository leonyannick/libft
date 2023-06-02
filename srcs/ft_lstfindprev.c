/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfindprev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:55:18 by lbaumann          #+#    #+#             */
/*   Updated: 2023/06/02 14:29:44 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * returns the prev node of node
 * NULL is returned in case of empty list or just 1 element
*/
t_list	*ft_lstfindprev(t_list *lst, t_list *node)
{
	if (!lst || !node || !lst->next || lst == node)
		return (NULL);
	while (lst->next && lst->next != node)
		lst = lst->next;
	return (lst);
}
