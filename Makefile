all:
		@clear
		@echo -----------BEGIN     libft     COMPILATION-----------
		@make -C libft/
		@echo -----------END     libft     COMPILATION-----------
		@echo -----------
		@echo -----------
		@echo -----------BEGIN     get_next_line     COMPILATION-----------
		@clang -Wall -Wextra -Werror -g -I libft/includes -o get_next_line.o -c get_next_line.c
		@echo -----------
		@echo -----------
		@echo -----------BEGIN     main     COMPILATION-----------
		@clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
		@echo -----------END     main     COMPILATION-----------
		@echo -----------
		@echo -----------
		@echo -----------BEGIN     test_gnl     COMPILATION-----------
		@clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
		@echo -----------END     test_gnl     COMPILATION-----------
		@make fclean -C libft/
		@clear

clean:
		rm -rf *.o
			rm -rf test_gnl

fclean: clean
		@make -C libft/ fclean

re: fclean all
