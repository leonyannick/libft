/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:48:29 by lbaumann          #+#    #+#             */
/*   Updated: 2022/11/30 15:07:13 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char s1[] = "sdfjkbjlkbsjkdbhor";
	char sub[] = "sdfj";

	printf("%i/n", strnstr(s1, sub, 3)); 
}
