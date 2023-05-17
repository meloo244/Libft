# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel <mel@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 16:04:36 by mmarie            #+#    #+#              #
#    Updated: 2023/03/23 19:04:11 by mel              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCC = cc
FLAGS = -Wall -Wextra -Werror
FILES =	ft_atoi.c\
	ft_isascii.c\
	ft_memcmp.c\
	ft_memset.c\
	ft_strlcpy.c\
	ft_toupper.c\
	ft_isalnum.c\
	ft_isdigit.c\
	ft_memcpy.c\
	ft_strdup.c\
	ft_strlen.c\
	ft_isalpha.c\
	ft_isprint.c\
	ft_memmove.c\
	ft_tolower.c\
	ft_strlcat.c\
	ft_memchr.c\
	ft_strchr.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strtrim.c\
	ft_substr.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_itoa.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_split.c\
	ft_strjoin.c
	
OBJS = $(FILES:.c=.o)

BONUS =	ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c

BONUS_OBJS = $(BONUS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	$(GCC) $(FLAGS) -c $< -o $(<:.c=.o) -I.

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:	$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
