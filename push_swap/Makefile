CFLAGC = -Wall -Wextra -Werror
CC = gcc
c_src = push_swap_utils.c push_swap_utils2.c push_swap_split.c  add_list.c instructions1.c radix_sort.c instructions2.c instructions3.c sort.c
c_obj=$(c_src:.c=.o)
push_swap = push_swap 

all: $(push_swap)


$(push_swap):$(c_obj) push_swap.h
	$(CC) $(CFLAGS) push_swap.c $(c_obj) -o $(push_swap)

%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -rf $(c_obj)
fclean: clean
	rm -rf $(push_swap)
re: fclean all