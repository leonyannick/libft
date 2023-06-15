/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:22:20 by lbaumann          #+#    #+#             */
/*   Updated: 2023/06/15 11:35:13 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * before: --PREV-->NODE-->NEXT-->
 * after: -->PREV-->NEXT-->
*/
void	ft_lstremove(t_list **lst, t_list *node, void (*del)(void *))
{
	t_list	*prev;

	if (!lst || !(*lst) || !node)
		return ;
	prev = ft_lstfindprev(*lst, node);
	if (!prev)
		*lst = node->next;
	else
		prev->next = node->next;
	ft_lstdelone(node, del);
}

/* void printList(t_list *node)
{
 while (node != NULL)
 {
     printf(" %i ", *(int *)node->content);
     node = node->next;
 }
 printf("\n");
}

int main(void)
{
 t_list *head = 0;
 t_list *modified;

 int i = 1;
 int j = 3;
 int k = 7;
 t_list *node_1 = ft_lstnew(&i);
 ft_lstadd_front(&head, node_1);
 t_list *node_2 = ft_lstnew(&j);
 ft_lstadd_back(&head, node_2);

 t_list *node_3 = ft_lstnew(&k);
 ft_lstadd_back(&head, node_3);
 printList(head);
 int *l = malloc(sizeof(int));
 *l = 10;
 t_list *node_4 = ft_lstnew(l);
 ft_lstadd_insert(node_1, node_4);
 printList(head);
 ft_lstremove(&head, node_4);
	
 printList(head);
 return 0;
} */
