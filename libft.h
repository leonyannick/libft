/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:23:05 by lbaumann          #+#    #+#             */
/*   Updated: 2022/12/07 10:09:31 by lbaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef long unsigned int size_t;

size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
// void	*ft_memset(void *s, int c, size_t n);
// void	*ft_memmove(void *dest, const void *src, size_t n);
// void	*ft_memcpy(void *dest, const void *src, size_t n);
// int		is_alpha(int c);
// void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
// char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
