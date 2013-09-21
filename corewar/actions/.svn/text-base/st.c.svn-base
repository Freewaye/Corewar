/*
** st.c for st in /home/dell-a_f/corewar-2016-knocka_a/virtual_m/actions
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sat Mar 24 17:43:50 2012 florian dell'aiera
** Last update Sun Mar 25 18:54:16 2012 antoine knockaert
*/

#include	"../vm.h"

void		st(t_glob *glob, t_champ *champ, int *args, int *type)
{
  op_t		*ins;
  int		first_r;

  first_r = champ->reg[(args[0] - 1)];
  if (champ != NULL)
    {
      ins = find_struct(3);
      champ->cycle_next_ins = ins->nbr_cycles;
      if (type[1] == 1)
	champ->reg[(args[1] - 1)] = first_r;
      if (type[1] == 2)
	glob->mem[args[1]] = first_r;
      if (type[1] == 3)
	glob->mem[((champ->pc + args[1] % IDX_MOD) % MEM_SIZE)] = first_r;
    }
}
