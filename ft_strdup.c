/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:29:45 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/01 12:37:50 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
	DESC: returns pointer to new string (duplicate of s)
	RETURN:	pointer
			NULL if insufficient memory
*/
char	*ft_strdup(const char *s)
{
	int		len;
	char	*dup;
	char	*dup_start;

	len = ft_strlen(s);
	dup = malloc(len + 1);
	if (!dup)
		return (0);
	dup_start = dup;
	while (len > 0)
	{
		*dup = *s;
		dup++;
		s++;
	}
	*dup = 0;
	return (dup_start);
}
