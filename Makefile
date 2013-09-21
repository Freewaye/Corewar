
NAME=		corewar

NAME_ASM=	asm

RM=		rm -f

SRC_ASM=	asm/main.c \
		asm/src/add_to_list.c \
		asm/src/init_list.c \
		asm/src/stock_file.c \
		asm/src/get_next_line.c \
		asm/src/find_struct.c \
		asm/src/gere_file.c \
		asm/src/put_command_in_list.c \
		asm/src/parse.c \
		asm/src/opcode.c \
		asm/src/is_label.c \
		asm/src/is_to_parse.c \
		asm/src/asm_error.c \
		asm/src/aff_list.c \
		asm/src/put_int_list.c \
		asm/src/init_header.c \
		asm/src/stock_header.c \
		asm/src/des_param.c \
		asm/src/gere_fixed_label.c \
		asm/src/add_label_to_list.c \
		asm/src/bin_to_int.c \
		asm/src/handle.c \
		asm/src/put_char_in_int.c \
		asm/src/fill_nb_in_list.c \
		asm/src/is_index_func.c \
		asm/src/detect_label_in_str.c \
		asm/src/len_list.c \
		asm/src/fill_lbl_list.c \
		asm/src/fill_label.c \
		asm/src/verif_lbl_char.c \
		asm/src/handle2.c \
		asm/src/free_all.c \
		lib/xfree.c \
		lib/my_pow.c \
		lib/convert_int.c \
		lib/beg_match.c \
		lib/init_str.c \
		lib/concat.c \
		lib/op.c \
		lib/my_strdup.c \
		lib/my_errex.c \
		lib/my_str_isnum.c \
		lib/my_putchar.c \
		lib/my_putstr.c \
		lib/my_strlen.c \
		lib/my_tablen.c \
		lib/my_match.c \
		lib/xread.c \
		lib/xmalloc.c \
		lib/xwrite.c \
		lib/my_getnbr.c \
		lib/my_putnbr.c

OBJ_ASM=	$(SRC_ASM:.c=.o)

SRC=		corewar/main.c \
		corewar/init/init.c \
		corewar/init/av_error.c \
		corewar/init/gere_av.c \
		corewar/vm/check_open.c \
		corewar/init/init_champ.c \
		corewar/init/init_vm.c \
		corewar/vm/check_cycle_to_die.c \
		corewar/vm/find_struct.c \
		corewar/vm/update_champ.c \
		corewar/vm/game.c \
		corewar/actions/sub.c \
		corewar/actions/add.c \
		corewar/actions/and.c \
		corewar/actions/or.c \
		corewar/actions/xor.c \
		corewar/actions/ld.c \
		corewar/actions/lld.c \
		corewar/vm/fill.c \
		corewar/vm/basics_args.c \
		corewar/vm/check_champ.c \
		corewar/vm/desc_param.c \
		corewar/vm/find_champ.c \
		corewar/vm/recup_int.c \
		corewar/vm/exec.c \
		corewar/vm/recup_args.c \
		corewar/actions/live.c \
		corewar/actions/zjump.c \
		lib/xfree.c \
		lib/init_str.c \
		lib/convert_int.c \
		lib/my_strdup.c \
		lib/op.c \
		lib/my_errex.c \
		lib/my_str_isnum.c \
		lib/my_putchar.c \
		lib/my_putstr.c \
		lib/my_strlen.c \
		lib/my_tablen.c \
		lib/my_match.c \
		lib/xread.c \
		lib/xmalloc.c \
		lib/xwrite.c \
		lib/my_getnbr.c \
		lib/my_putnbr.c


OBJ=		$(SRC:.c=.o)

CFLAGS=		-g -W -Wall -ansi -pedantic

LDFLAGS=

all:		$(NAME) $(NAME_ASM)

$(NAME):	$(OBJ)
		cc -o corewar/$(NAME) $(OBJ) $(LDFLAGS)

$(NAME_ASM):	$(OBJ_ASM)
		cc -o asm/$(NAME_ASM) $(OBJ_ASM) $(LDFLAGS) -g

clean:
		$(RM) $(OBJ) $(OBJ_ASM)

fclean:		clean
		$(RM) corewar/$(NAME) asm/$(NAME_ASM)

re:		clean fclean all
