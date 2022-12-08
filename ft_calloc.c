/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:56:20 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/08 16:34:00 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESC:	allocates memory for am array of nmemb elements of size bytes
			memory is set to 0


	RETURN: 	nmemb/size = 0 -> null or pointer that can be freed
				pointer to allocated memory
				NULL if nmemb * size causes integer overflow (app. not relevant)

	TESTS:	nmemb/size = 0
			nmemb * size > max_integer
			normal call
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*addr;

	addr = malloc(nmemb * size);
	if (addr == 0)
		return (0);
	ft_memset(addr, 0, (nmemb * size));
	return (addr);
}

/* int	main(void)
{
	char *ptr;
	ptr = ft_calloc(45874972665, 547885);
	if(!ptr)
		(printf("NULL POINTER RETURNED\n"));
	free(ptr);
} */
