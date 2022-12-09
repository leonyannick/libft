/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:27:42 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/09 14:32:11 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Outputs the string ’s’ to the given file
	descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	write (fd, s, s_len);
}
