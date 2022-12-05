/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:34:47 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/05 11:12:04 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	cnt_sign;

	num = 0;
	cnt_sign = 0;

	while (*str == ' ')
		str++;

	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			cnt_sign++;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		num = 10 * num + *str - '0';
		str++;
	}
	if (cnt_sign % 2 != 0)
		num *= -1;
	return (num);
}

/* int	main(void)
{
	char test[] = "--42";
	printf("%i\n", ft_atoi(test));
} */
