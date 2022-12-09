/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:34:33 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/09 14:41:05 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_int(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (0);
	}
	if (nb < 0)
	{	
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	return (nb);
}

/*
	Outputs the integer ’n’ to the given file
	descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	n = check_int(n, fd);
	if (n == 0)
		return ;
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
}
