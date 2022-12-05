/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:03:26 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/05 11:43:23 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
-usage: null should be included in size, src must be null terminated
-null terminate result as long as at least 1 byte buffer in dest
-copies up to size - 1 characters to dest
*/

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;

	while(i < size - 1 && *src != 0)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;

	return(ft_strlen(src));
}

/* int	main(void)
{
	char src1[] = "test";
	char dst1[5];

	printf("%s\n", src1);
	printf("%s\n", dst1);

	ft_strlcpy(dst1, src1, 2);

	printf("%s\n", src1);
	printf("%s\n", dst1);

} */