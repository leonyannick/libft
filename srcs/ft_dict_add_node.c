/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_add_node.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:22:38 by lbaumann          #+#    #+#             */
/*   Updated: 2023/06/15 11:39:22 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/dict.h"

/**
 * add key-value pair as new node at the back of the dictionary
 * 
 * if the key already exists in the dictionary, the value is modified with the
 * new value
 * 
 * returns if dict doesnt exist, if key is NULL, or if allocation of t_dict
 * struct or new node fails
*/
void	ft_dict_add_node(t_list **dict, char *key, void *value)
{
	t_dict	*data;
	t_list	*node;

	if (!dict || !key)
		return ;
	if (ft_dict_get_node(*dict, key))
		return (ft_dict_modify_value(*dict, key, value));
	data = malloc(sizeof(t_dict));
	node = ft_lstnew(data);
	if (!data || !node)
		return ;
	data->key = ft_strdup(key);
	data->value = value;
	ft_lstadd_back(dict, node);
}

/* int	main(void)
{
	t_list	*dict = NULL;

	char	*str1 = ft_strdup("1");
	char	*str2 = ft_strdup("echo");
	char	*str3 = NULL;
	char	*str5 = ft_strdup("new value");

	dict_add_item(&dict, "item1", str1);
	dict_add_item(&dict, "item2", str2);
	dict_add_item(&dict, "item3", str3);
	ft_lstiter(dict, ft_print_dict);
	ft_lstremove(&dict, dict_get_node(dict, "item2"), ft_dict_node_del);
	dict_add_item(&dict, "item3", str5);
	ft_lstiter(dict, ft_print_dict);
	// printf("item2: %s\n", (char *)dict_get_value(dict, "item2"));

	// char *str4 = ft_strdup("nichtmehrecho");
	// dict_modify_value(dict, "item2", str4);
	
	// ft_lstiter(dict, print_dict);
	
	ft_lstclear(&dict, ft_dict_node_del);
	
} */
