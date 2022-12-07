/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:45:44 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/07 16:38:51 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	-returns pointer to first occurence of c in s
	-character = byte 
	-returns pointer to matched char or NULL if not found
	-term. 0 is considered part of the string
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != 0)
	{
		if (*s == c)
			return ((char *) s);
		s++;
	}

	if (c == 0)
		return ((char *) s);
	return (0);
}
