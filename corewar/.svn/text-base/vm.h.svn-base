/*
** vm.h for header in /home/knocka_a/corewar-2016-knocka_a/corewar
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Sun Mar 25 19:02:06 2012 antoine knockaert
** Last update Sun Mar 25 19:19:50 2012 antoine knockaert
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
** Strucures
*/

typedef struct	s_champ
{
  char		*filename;
  int		champ_nb;
  int		address;
  int		dump_cycle;
  int		fd;
  char		*data;
  header_t	header;
  int		begin;
  int		cycle_live;
  char		alive;
  int		cycle_next_ins;
  int		reg[REG_NUMBER];
  int		pc;
  char		carry;
} t_champ;

typedef struct	s_glob
{
  int		cycles;
  int		cycle_to_die;
  void		**champ;
  char		*mem;
  int		nbr_live;
  int		dies;
  void		(**ptr_func)(struct s_glob *glob, t_champ *champ, int *args, int *type);
} t_glob;

/*
** Ptr
*/
void		live(t_glob *glob, t_champ *champ, int *args, int *type);
void		zjump(t_glob *glob, t_champ *champ, int *args, int *type);
void		add(t_glob *glob, t_champ *champ, int *args, int *type);
void		sub(t_glob *glob, t_champ *champ, int *args, int *type);
void		and(t_glob *glob, t_champ *champ, int *args, int *type);
void		or(t_glob *glob, t_champ *champ, int *args, int *type);
void		xor(t_glob *glob, t_champ *champ, int *args, int *type);
void		ld(t_glob *glob, t_champ *champ, int *args, int *type);
void		lld(t_glob *glob, t_champ *champ, int *args, int *type);
/*
** Prototypes
*/

void		av_error(int ac, char **av);
void		gere_av(t_glob *glob, char **av);
void		init(t_glob *glob, int ac, char **av);
int		check_champ(t_glob *glob);
void		check_cycle_to_die(t_glob *glob);
void		check_open(t_glob *glob);
void		dump_mem(t_glob *glob);
op_t		*find_struct(int code);
void		game(t_glob *glob);
void		init_champ(t_glob *glob);
void		init_vm(t_glob *glob);
void		update_champion(t_champ *pt, t_glob *glob);
char		*fill(char *str);
t_champ		*find_champ(t_glob *glob, int nb);
int		recup_int(char *mem, int i, int size);
int		*recup_args(t_glob *glob, t_champ *pt, int *args, int opcode);
int		exec(t_glob *glob, t_champ *pt);
void		basics_args(t_glob *glob, t_champ *pt, int *args, int *type);

#endif
