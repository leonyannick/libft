/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:47:29 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/30 19:32:24 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESC: copies n bytes from address src to dest (area MUST NOT overlap)
	RETURN: pointer to dest
	TESTS: 
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	while (n)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
	return (dest);
}

/* int	main(void)
{
	char str[] = "test";
	char dst[5];

	printf("%s\n", str);
	//printf("%s\n", dst);
	ft_memcpy(dst, str, 5);
	printf("%s\n", str);
	printf("%s\n", dst);
} */
