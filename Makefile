# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaumann <lbaumann@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 11:21:05 by lbaumann          #+#    #+#              #
#    Updated: 2022/12/05 17:48:15 by lbaumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
NAME = libft.a
OBJS = ft_atoi.o ft_strlen.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_substr.o ft_strtrim.o ft_strncmp.o
SRCS = ft_atoi.c ft_strlen.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_substr.c ft_strtrim.c ft_strncmp.c

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
