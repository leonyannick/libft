# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaumann < lbaumann@student.42berlin.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 11:21:05 by lbaumann          #+#    #+#              #
#    Updated: 2022/12/12 11:15:25 by lbaumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
NAME = libft.a
OBJS = ft_isdigit.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isprint.o \
ft_toupper.o ft_tolower.o ft_strlen.o ft_bzero.o ft_memset.o ft_memcpy.o \
ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strncmp.o \
ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o \
ft_substr.o ft_strjoin.o ft_strtrim.o ft_itoa.o ft_strmapi.o ft_striteri.o \
ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_split.o

OBJS_BONUS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstsize_bonus.o \
ft_lstlast_bonus.o ft_lstadd_back_bonus.o ft_lstdelone_bonus.o \
ft_lstclear_bonus.o ft_lstiter_bonus.o ft_lstmap_bonus.o

all: $(NAME)

$(NAME): $(OBJS)
	ar -cr $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar -cr $(NAME) $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
