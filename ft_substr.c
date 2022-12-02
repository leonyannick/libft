/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:30:20 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/02 14:42:24 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

/*
	RETURN:
		The substring.
		NULL if the allocation fails.
	DESC:
		Allocates (with malloc(3)) and returns a substring
		from the string ’s’.
		The substring begins at index ’start’ and is of
		maximum size ’len’.
	PARAMS:
		s:  The string from which to create the substring.
		start:  The start index of the substring in the
		string ’s’.
		len:  The maximum length of the substring.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*sub_start;

	sub = malloc(len + 1);
	if (sub == 0)
		return (0);
	if (ft_strlen(s) < len) //not sure
		return (0);
	if (start < 0)
		return (0);
	sub_start = sub;
	s = s + start;
	while (len > 0 && *s != 0)
	{
		*sub = *s;
		sub++;
		s++;
		len--;
	}
	*sub = 0;
	return (sub_start);
}
