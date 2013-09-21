/*
** recup_args.c for args in /home/knocka_a/corewar-2016-knocka_a/virtual_m/vm
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Thu Mar 22 19:18:16 2012 antoine knockaert
** Last update Sun Mar 25 18:57:57 2012 antoine knockaert
*/

#include	"../vm.h"

void		live_args(t_glob *glob, t_champ *pt, int *args)
{
  args[0] = recup_int(glob->mem, pt->pc + 1, 4);
}

void		zjump_args(t_glob *glob, t_champ *pt, int *args)
{
  int		recup1;
  int		recup2;

  recup1 = recup_int(glob->mem, pt->pc + 1, 1);
  recup2 = recup_int(glob->mem, pt->pc + 2, 1);
  args[0] = recup2 - recup1;
  if (args[0] < 0)
    args[0]--;
}

void		fork_args(t_glob *glob, t_champ *pt, int *args)
{
  pt->pc += 2;
  glob = glob;
  args = args;
}

void		lfork_args(t_glob *glob, t_champ *pt, int *args)
{
  pt->pc += 2;
  glob = glob;
  args = args;
}

int		*recup_args(t_glob *glob, t_champ *pt, int *args, int opcode)
{
  int		*type;

  type = xmalloc(sizeof(char) * 4);
  if (opcode == 1)
    live_args(glob, pt, args);
  else if (opcode == 9)
    zjump_args(glob, pt, args);
  else if (opcode == 12)
    fork_args(glob, pt, args);
  else if (opcode == 15)
    lfork_args(glob, pt, args);
  else
    basics_args(glob, pt, args, type);
  return (type);
}
