/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:32:57 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/05 08:46:00 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char str[] = "pleasebewell";
	assert(ft_substr(str, 0, 20) == 0); //len > strlen(str) -> return 0 
	assert(strcmp(ft_substr(str, 0, 3), "ple") == 0); //normal behavour 
	
}