/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:28:52 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/29 13:43:02 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	-appends src at end of dst
	-appends at most size - strlen(dst) - 1 bytes
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;

	while (*dst != 0)
	{
		dst++;
		size--;
	}

	while(i < size - 1 && *src != 0)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}

	*dst = 0;
	return (ft_strlen(src));
}
