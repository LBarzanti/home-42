# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 23:27:30 by lbarzant          #+#    #+#              #
#    Updated: 2024/12/11 19:43:21 by lbarzant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a
FUNC = get_next_line.c get_next_line_utils.c
OBJ = $(FUNC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@cc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean 
	@rm -f $(NAME)

re:		fclean all

run:	fclean all
		@clear
		@cc $(FLAGS) $(OBJ) -o get_next_line
		@./get_next_line
		@make fclean
		@rm get_next_line
