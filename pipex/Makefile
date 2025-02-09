# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbarzant <lbarzant@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 23:27:30 by lbarzant          #+#    #+#              #
#    Updated: 2025/02/09 19:25:49 by lbarzant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex.a
FUNC = pipex.c
BFUNC = 
OBJ = $(FUNC:.c=.o)
BOBJ = $(BFUNC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all:		$(NAME)

makeprintf:
	@make -C ./printf
	@mv ./printf/*.o .

$(NAME): $(OBJ) makeprintf
	@ar rcs $(NAME) $(OBJ)

%.o: %.c
	@gcc $(FLAGS) -c $< -o $@ -I . -I printf

clean:
	@rm -f $(OBJ) $(BOBJ)
	@make -C printf clean

fclean: clean 
	@rm -f $(NAME)
	@make -C printf fclean

#bonus:	$(OBJ) $(BOBJ)
#	@ar rcs $(NAME) $(OBJ) $(BOBJ)

re:		fclean all

run:	fclean all makeprintf
		@clear
		@cc $(FLAGS) *.o -o out
		@make fclean
		@rm *.o