/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_from_strarr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:12:52 by lbaumann          #+#    #+#             */
/*   Updated: 2023/06/16 11:41:49 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/dict.h"

/**
 * convert dictionary to NULL terminated str array
 * the example str "var=" is saved in the dict with
 * an empty string "" as the value and the key "var"
*/
t_list	*ft_dict_from_strarr(char **arr)
{
	t_list	*dict;
	char	*key;
	char	*value;
	char	**key_val_pair;

	dict = NULL;
	if (!arr)
		return (NULL);
	while (*arr)
	{
		key_val_pair = ft_split(*arr, '=');
		key = key_val_pair[0];
		if (key_val_pair[1])
			value = ft_strdup(key_val_pair[1]);
		else
			value = ft_strdup("");
		ft_dict_add_node(&dict, key, value);
		ft_free_split_arr(key_val_pair);
		arr++;
	}
	return (dict);
}
