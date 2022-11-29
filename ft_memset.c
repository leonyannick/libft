/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:32:13 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/29 11:57:44 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*addr = s;
	while (n)
	{
		*addr = c;
		addr++;
		n--;
	}
	return (s);
}

/* int	main(void)
{
	char str[] = "test";
	printf("%s\n", str);
	memset(&str, 'c', 3);
	printf("%s\n", str);
} */