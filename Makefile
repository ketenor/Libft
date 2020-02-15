# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ketenor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 18:28:28 by ketenor           #+#    #+#              #
#    Updated: 2019/12/13 02:55:05 by ketenor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=ft_isdigit.c ft_strlen.c ft_isprint.c ft_strncmp.c ft_memccpy.c \
    ft_strrchr.c ft_memchr.c ft_tolower.c ft_bzero.c ft_memcpy.c ft_toupper.c \
    ft_isalnum.c ft_memmove.c ft_isalpha.c ft_memcmp.c ft_memset.c \
    ft_isascii.c ft_strchr.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
    ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
    ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
    ft_putnbr_fd.c 

OBJ = $(SRC:%.c=%.o)

SRCB =  ft_lstnew.c ft_lstadd_front.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstmap.c

BOBJ = $(SRCB:%.c=%.o)

NAME=libft.a

FLAGS=-Wall -Werror -Wextra

all : $(NAME) bonus

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	Ranlib $(NAME)
.c.o:
	gcc $(FLAGS) -c $< -o $@ -I.

bonus: $(NAME) $(BOBJ)
	ar rcs $(NAME) $(BOBJ)	
	
clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY : all re clean fclean bonus
