/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:47:29 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/28 17:55:32 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s = src;
    char    *d = dest;
	while (n)
	{
		*d = *s;
		s++;
        d++;
		n--;
	}
    *d = 0;

	return (dest);
}

int	main(void)
{
	/* char str[] = "test";
	printf("%s\n", str);
	memset(&str, 'c', 3);
	printf("%s\n", str); */
}