/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:35 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/29 17:10:02 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	//bzero
	/* char str[] = "test";
	printf("%s\n", str);
	ft_bzero(&str, 3);
	printf("%c\n", str[1]); */

	//memcopy
	/* char str[] = "test";
	printf("%s\n", str);
	printf("%s\n", str);
	memset(&str, 'c', 3);
	 */

	//memset
	/* char str[] = "test";
	printf("%s\n", str);
	ft_memset(str, 'c', 3);
	printf("%s\n", str); */


	//strlcpy
/* 	char src1[] = "test";
	char dst1[5];
	printf("%s\n", src1);
	printf("%s\n", dst1);
	ft_strlcpy(dst1, src1, 2);
	printf("%s\n", src1);
	printf("%s\n", dst1);
 */

	//strlcat
	/* char src1[] = "test";
	char dst1[9] = "leon";
	ft_strlcat(dst1, src1, 9);
	printf("%s\n", dst1); */

	//strchr = strrchr
	char src1[] = "testez";
	char c = 't';
	printf("%s\n", ft_strrchr(src1, c));

	
}