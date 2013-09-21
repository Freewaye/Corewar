/*
** zjump.c for toto in /home/knocka_a/corewar-2016-knocka_a/corewar/actions
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Sun Mar 25 18:54:31 2012 antoine knockaert
** Last update Sun Mar 25 18:54:32 2012 antoine knockaert
*/

#include	"../vm.h"

void		zjump(t_glob *glob, t_champ *champ, int *args, int *type)
{
  op_t		*ins;

  glob = glob;
  type = type;
  ins = find_struct(9);
  champ->cycle_next_ins = ins->nbr_cycles;
  champ->pc += args[0] % IDX_MOD;
}
