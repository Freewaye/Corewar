/*
** asm.h for asm in /home/knocka_a/corewar-2016-knocka_a/assembleur
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Sun Mar 25 12:46:48 2012 antoine knockaert
** Last update Sun Mar 25 15:36:59 2012 antoine knockaert
*/

#ifndef		__ASM_H__
#define		__ASM_H__

/*
** Includes
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"../lib/my.h"
#include	"../lib/op.h"

/*
** Structures
*/

typedef struct	s_lbl
{
  int		counter;
  char		*label;
  struct s_lbl	*next;
} t_lbl;

typedef struct	s_intl
{
  int		nb;
  int	        label_counter;
  char		*label;
  struct s_intl *next;
} t_intl;

typedef struct	s_list
{
  char		*line;
  char		**cmd;
  t_intl	*line_final;
  struct s_list	*next;
  struct s_list	*prev;
} t_list;

typedef struct	s_glob
{
  char		*filename;
  char		*new_file;
  int		fd_file;
  t_list	*list;
  t_lbl		*lbl;
  int		counter;
  header_t	*header;
} t_glob;

#define BUFFER_SIZE 4096

/*
** Prototypes
*/

/*
** particular functions
*/

int		handle_ldi(t_list *list, char **str, t_glob *glob, int i);
int		handle_sti(t_list *list, char **str, t_glob *glob, int i);
int		handle_fork_zjmp(t_list *list, char **str, t_glob *glob, int i);

/*
** initialization
*/

void		init_header(header_t *head);
void		init_list(t_glob *glob, char *file);

/*
** labels
*/

void		add_label_to_list(t_glob *glob, char *label);
void		gere_fixed_label(t_glob *glob, t_list *list);
int		detect_label_in_str(char *str);
int		handle_lbl(t_list *list, char *str, t_glob *glob);
void		fill_label(t_glob *glob);
int		is_label(char *str);
void		fill_label_list(t_intl *list, int nb);
void		verif_lbl_char(char *str);

/*
** header
*/
void		stock_header(t_glob *glob, int fd);

/*
** list
*/

void		add_to_list(t_glob *glob, char *line);
void		aff_list(t_glob *glob);
void		put_int_list(t_list *list, int nb, int lbl, char *str);
char		**put_command_in_list(char *str);
int		fill_nb_in_list(t_list *list, t_glob *glob);
void		asm_error(char *type, int line);
void		stock_file(t_glob *glob);
void		des_param(t_glob *glob, t_list *list, int line, op_t *ope);
void		put_char_in_int(t_list *list, int nb, int size, t_glob *glob);
char		*cut_string(char *src, char c);
op_t		*find_struct(char *str);
void		gere_file(char *file);
char		*get_next_line(int fd);
int		my_strcmp(char *src, char *dest);
int		is_index_func(char *str);
int		is_to_parse(t_list *list);
op_t		*opcode(t_glob *glob, t_list *list, int i);
void		parse(t_glob *glob);
void		put_char_in_int(t_list *list, int nb, int size, t_glob *glob);
int		check_string(char *str);
int		handle_reg(t_list *list, char *str, t_glob *glob);
int		handle_dir(t_list *list, char *str, t_glob *glob);
int		handle_ind(t_list *list, char *str, t_glob *glob);
int		len_list(t_intl *list);
int		check_string(char *str);
int		choose_size_byte(t_list *list, char *str, t_glob *glob);
int		bin_to_int(char *str);
void		free_all(t_glob *glob);

#endif
