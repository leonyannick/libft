/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aehrlich <aehrlich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:19:46 by aehrlich          #+#    #+#             */
/*   Updated: 2023/02/13 10:17:33 by aehrlich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin_free(char const *s1, char const *s2)
{
	char	*ret;
	int		len_s1;
	int		len_s2;

	if (s1 == 0 || s2 == 0)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, s1, len_s1 + 1);
	ft_strlcpy(&ret[len_s1], s2, len_s2 + 1);
	free((void *)s1);
	return (ret);
}
