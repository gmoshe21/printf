# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmoshe <gmoshe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/13 16:57:26 by gmoshe            #+#    #+#              #
#    Updated: 2020/07/21 16:04:35 by gmoshe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRC		=	ft_printf.c\
			chek.c\
			flag_xp.c\
			ft_itoa_u.c\
			ft_str.c\
			flag_c.c\
			ft_strlen.c\
			ft_itoa.c\
			ft_calloc.c\
			ft_strlcpy.c\
			ft_memset.c\
			flag_p.c\
			flag_for.c\
			ft_strdup.c\
			chekker_flags.c\
			ft_memchr.c\

OBJS	=	$(SRC:.c=.o)

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

%.o : %.c
		gcc $(CFLAGS) -c $< -o $@

$(NAME) :	$(OBJS)
		ar rc $(NAME) $^
		ranlib $(NAME)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re		:	fclean all