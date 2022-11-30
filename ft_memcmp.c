/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 13:55:25 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/30 14:11:41 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a1;
	unsigned char	*a2;

	a1 = (unsigned char*) s1;
	a2 = (unsigned char*) s2;

	while (*a1 != 0 && *a2 != 0 && n > 0)
	{
		if (*a1 < *a2)
			return (-1);
		else if (*a1 > *a2)
			return (1);
		*a1++;
		*a2++;
		n--;
	}
	return (0);
}
