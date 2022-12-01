/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:56:20 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/01 12:29:24 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
	DESC:	allocates memory for am array of nmemb elements of size bytes
			memory is set to 0


	RETURN: 	nmemb/size = 0 -> null or pointer that can be freed
				pointer to allocated memory
				NULL if nmemb * size causes integer overflow

	TESTS:	nmemb/size = 0
			nmemb * size > max_integer
			normal call
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	if (nmemb == 0 || size == 0 || ((long) nmemb * (long) size > 2147483647))
		return (0);
	return (malloc(nmemb * size));
}

/* int	main(void)
{
	char *ptr;
	ptr = ft_calloc(45874972665, 547885);
	if(!ptr)
		(printf("NULL POINTER RETURNED\n"));
	free(ptr);
} */
