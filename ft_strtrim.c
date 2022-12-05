/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:55:08 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/05 18:00:55 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
	Parameters
		s1:  The string to be trimmed.
		set:  The reference set of characters to trim.
	Return value
		The trimmed string.
		NULL if the allocation fails.
	Description
		Allocates (with malloc(3)) and returns a copy of
		’s1’ with the characters specified in ’set’ removed
		from the beginning and the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		set_len;
	int		s1_len;
	char	*ret;
	int		trim_size;

	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	trim_size = 0;
	if (ft_strncmp(s1 + s1_len - set_len, set, set_len) == 0)
	{
		trim_size += set_len;
	}
	if (ft_strncmp(s1, set, set_len) == 0)
	{
		s1 += set_len;
		trim_size += set_len;
	}
	
	
	ret = malloc(s1_len - trim_size + 1);
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, s1, s1_len - trim_size + 1);
	return (ret);
}
