# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thumavu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/19 14:30:41 by thumavu           #+#    #+#              #
#    Updated: 2016/06/19 17:59:17 by thumavu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= ft_ls

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -I.

FILES	= main.c \
		  pass_arguments.c \
		  browse_directory.c \
		  get_file_info.c \
		  print_files.c \
		  print_utils.c \
		  errors.c \
		  manage_lists.c \
		  free.c \
		  sort_files.c 

LIBFT	= ./libft

SRC		= $(addprefix , $(FILES))
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $^ -L$(LIBFT) -lft

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJ)
	@make -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all
