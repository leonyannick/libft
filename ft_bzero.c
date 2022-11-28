/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:19:26 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/28 16:27:48 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void ft_bzero(void *s, size_t n)
{
	char	*c = s;
    while (n)
    {
        *c = 0;
        c++;
        n--;
    }
}

int	main(void)
{
	char str[] = "test";
	printf("%s\n", str);
	ft_bzero(&str, 3);
	printf("%c\n", str[1]);
}