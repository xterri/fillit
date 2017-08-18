# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anazar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 14:41:49 by anazar            #+#    #+#              #
#    Updated: 2017/07/06 15:59:44 by anazar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRCDIR = ./srcs/
LIBDIR = ./libft/
FILE_1 = check_list ft_maplst make_grid error fillit 
FILE_2 = row_adjust save_tets del_list clear_tets find_pos 
FILE_3 = insert_newlines tet_reset replace backtrack check_pos clean_map
FILE_4 = next_piece map_reset
FILES = $(FILE_1) $(FILE_2) $(FILE_3) $(FILE_4)
HEADERS = libft.h fillit.h
SRCS = $(addprefix $(SRCDIR), $(patsubst %, %.c, $(FILES)))
OBJS = $(patsubst %, %.o, $(FILES))
FLAGS = -Wall -Werror -Wextra
LIB = -L$(LIBDIR) -lft

all: $(NAME)

$(OBJS): $(SRCS)
	@gcc $(FLAGS) -c $(SRCS)

$(NAME): $(OBJS) $(LIBDIR)
	@$(MAKE) -C $(LIBDIR)
	@gcc $(OBJS) $(LIB) -o $(NAME)

clean:
	@$(MAKE) clean -C $(LIBDIR)
	@rm -rf $(OBJS)

fclean:
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIBDIR)
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all
