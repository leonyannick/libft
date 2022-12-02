/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:05:53 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/02 13:13:47 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	/* char *ptr;
	ptr = ft_calloc(45874972665, 547885);
	if(!ptr)
		(printf("NULL POINTER RETURNED\n"));
	free(ptr); */
	assert(ft_calloc(5, 0) == calloc(5, 0));
}