/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 09:41:52 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/08 10:24:52 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
	returns len of substring until next delimeter c or until end of s
*/
static int	ft_substr_len(char *s, char c)
{
	int		len;

	len = 0;
	while (*s != 0 && *s != c)
	{
		s++;
		len++;
	}
	return (len);
}

static int	ft_cnt_delimiter(char *s, char c)
{
	int		cnt_delimiter;

	cnt_delimiter = 0;
	while (1)
	{
		s = ft_strchr(s, c);
		if (s == 0)
			break ;
		s++;
		cnt_delimiter++;
	}
	return (cnt_delimiter);
}

/*
	PARAMETERS:
		s: The string to be split.
		c: The delimiter character.
	RETURNS:
		The array of new strings resulting from the split.
		NULL if the allocation fails.
	DESCRIPTION:
		Allocates (with malloc(3)) and returns an array
		of strings obtained by splitting ’s’ using the
		character ’c’ as a delimiter. The array must end
		with a NULL pointer.
*/
char	**ft_split(char const *s, char c)
{
	int		amnt_splits;
	char	**arr;
	char	**temp_arr;
	int		word_len;

	if (s == 0)
		return (0);
	amnt_splits = ft_cnt_delimiter((char *) s, c) + 1;
	arr = malloc((amnt_splits + 1) * sizeof(char *));
	if (arr == 0)
		return (0);
	temp_arr = arr;
	while (*s != 0)
	{
		word_len = ft_substr_len((char *) s, c);
		if (word_len != 0)
		{
			*arr = malloc(word_len + 1);
			if (*arr == 0)
				return (0);
			ft_strlcpy(*arr, (char *) s, word_len + 1);
			arr++;
		}
		s += word_len + 1;
	}
	*arr = 0;
	return (temp_arr);
	// return (0);
}


/* void    print_string_arr(char **arr)
{
    if(arr == 0)
    {
        printf("Empty arr\n");
        return;
    }
    printf("[");
    while(*arr != 0)
    {
        printf("%s, ", *arr);
        arr++;
    }
    printf("] \n");
}

int	main(void)
{
	//printf("%i\n", ft_cnt_delimiter("aaaadaaadaadad", 'd'));

	//ft_split
    char delim = 'X';
    //print_string_arr(ft_split("XHelloXWorldX", 'X'));
    // print_string_arr(ft_split("XHelloXWorld", 'X'));
    // print_string_arr(ft_split("HelloXWorldX", 'X'));
    // print_string_arr(ft_split("HelloXWorld", 'X'));
    print_string_arr(ft_split("XHello WorldX", 'X'));
    print_string_arr(ft_split("NoDelimiter", 'X'));
    // print_string_arr(ft_split("Hello WorldX", 'X'));
    // print_string_arr(ft_split("HelloXXWorld", 'X'));
    // print_string_arr(ft_split("X", 'X'));
    // print_string_arr(ft_split("XX", 'X'));
    // print_string_arr(ft_split("XXX", 'X'));
    // print_string_arr(ft_split("", 'X'));
    // print_string_arr(ft_split(0, 'X'));
    // print_string_arr(ft_split("split  ||this|for|me|||||!|", '|'));

	char str[] = "churchcchapelc";
	char **test_arr;
	int i = 0;

	test_arr = ft_split(str, 'c');

	while (i < 3)
	{
		printf("%s\n", test_arr[i]);
		i++;
	}

	//printf("len until next delim: %i\n", ft_substr_len(&str[1], 'c'));

	//ft_split(str, 'c');

	//printf("%li\n", sizeof(char *));
} */
