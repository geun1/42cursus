# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsong <gsong@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/10 18:39:19 by song-geun-i       #+#    #+#              #
#    Updated: 2022/07/12 16:35:54 by gsong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					= libft.a

SRCS					= ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_memset.c \
					ft_strchr.c \
					ft_strlen.c \
					ft_strrchr.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_strlcpy.c \
					ft_memmove.c
OBJS					= $(SRCS:%.c=%.o)

FLAGS					= -Wall -Wextra -Werror

$(NAME)		:	$(OBJS)
			gcc $(FLAGS) -c $(SRCS) -I./
			ar rc $(NAME) $(OBJS)

all	:	$(NAME)

clean	:
		rm -f $(OBJS)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re