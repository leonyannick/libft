/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:52:19 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/30 20:19:30 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESC: copies n bytes from src to dest. areas maz overlap. first into temp array, that is not overlapping
	RETURN: pointer to dest
	TESTS: -overlap with src addr smaller
			-overlap with dst adrr smaller
			-no overlap
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{

	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	while (n)
	{
		if (s < d && (s + n > d)) //overlap src addr smaller
		*(d + n) = *(s + n);
		else
		{
			*d = *s;
			s++;
			d++;
		}
		n--;
	}
	return (dest);
}

int	main(void)
{
	char str[10] = "test";

	printf("%s\n", str);
	//printf("%s\n", dst);
	ft_memmove(&str[2], str, 5);
	printf("%s\n", &str[2]);
}
