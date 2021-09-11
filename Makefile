# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psoares <psoares@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 00:39:27 by psoares           #+#    #+#              #
#    Updated: 2021/09/09 15:44:36 by psoares          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MY_PUSH_SWAP	= push_swap
MY_CHECKER		= checker

MY_PUSH_SWAP_SRCS = push_swap.c \
				./src/do_pp.c \
				./src/do_rr.c \
				./src/do_rrr.c \
				./src/do_ss.c \
				./src/utils.c \
				./src/utils_2.c \
				./src/utils_3.c \
				./src/utils_4.c \
				./sort/sort_max.c \
				./sort/sort_min.c \
				./src/utils_for_sort.c \

MY_CHECKER_SRCS	= ./src/do_pp.c \
				./src/do_rr.c \
				./src/do_rrr.c \
				./src/do_ss.c \
				./src/utils.c \
				./src/utils_2.c \
				./src/utils_3.c \
				./src/utils_4.c \
				./sort/sort_max.c \
				./sort/sort_min.c \
				./src/utils_for_sort.c \
				./checker_src/checker.c \
				./checker_src/do_cpp.c \
				./checker_src/do_crr.c \
				./checker_src/do_css.c \
				./checker_src/do_crrr.c \
				./get_next_line-master/get_next_line.c \
				./get_next_line-master/get_next_line_utils.c \

HEADER		= push_swap.h
HEADER2		= get_next_line.h

CC = gcc

RM = rm -f

FLAGS = -Wall -Wextra -Werror -g

all: $(MY_PUSH_SWAP)

$(MY_PUSH_SWAP) : $(MY_PUSH_SWAP_SRCS)
	@$(CC) $(FLAGS) $(MY_PUSH_SWAP_SRCS) -o $(MY_PUSH_SWAP)
	@printf "push_swap was build ✅\n"

%.o: %.c	$(HEADER)
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

bonus: $(MY_CHECKER)

$(MY_CHECKER) : $(MY_CHECKER_SRCS)
	@$(CC) $(FLAGS) $(MY_CHECKER_SRCS) -o $(MY_CHECKER)
	@printf "checker was build ✅\n"


clean:
		@$(RM) $(MY_PUSH_SWAP) $(MY_CHECKER)
		@printf "ALL is in trash 🗑\n"

fclean: clean

re: fclean all

rebonus: fclean bonus

.PHONY : all clean fclean re bonus rebonus