/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:29:33 by lbaumann          #+#    #+#             */
/*   Updated: 2023/02/15 16:55:50 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s != 0)
	{
		size++;
		s++;
	}
	return (size);
}

/* int	main(void)
{
	char test[] = "kurios";

	printf("%i", ft_strlen(test));
} */
