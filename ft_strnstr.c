/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:14:55 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/30 17:18:33 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/*
	-first occurrence of little in big, with len char searched
	-char after \0 are not searched
	-Return:	-little empty: big
				-no little in big: 0
				-pointer to first occ. of little
*/


//compares string with substring: returns 1 if equal
static int	ft_cmp(char *str, char *to_find)
{
	while (*str != 0 && *to_find != 0)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (1);
}


char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	int		i;

	b = (char *) big;
	l = (char *) little;
	i = 0;
	if (*l == 0)
		return (b);
	if (len < ft_strlen(little))
		return (0);
	while (*b != 0 && len >= ft_strlen(little))
	{
		if (ft_cmp(b, l))
			return (b);
		b++;
		len--;
	}
	return (0);
}


/*
	TESTS:
	-substr empty
	-substr not in str
	-empty str
	-both empty

*/
int	main(void)
{
	char *s_strs[] = {"", "helloworldelow", "low"};
	printf("%s/n", (ft_strnstr(s_strs[1], s_strs[2], 5)));


	
}
