/*
** ld.c for ld in /home/dell-a_f/corewar-2016-knocka_a/virtual_m/actions
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sat Mar 24 13:39:26 2012 florian dell'aiera
** Last update Sun Mar 25 18:53:53 2012 antoine knockaert
*/

#include	"../vm.h"

void		ld(t_glob *glob, t_champ *champ, int *args, int *type)
{
  op_t		*ins;

  if (champ != NULL)
    {
      ins = find_struct(2);
      champ->cycle_next_ins = ins->nbr_cycles;
      if (type[0] == 1)
	champ->reg[(args[1] - 1)] = champ->reg[(args[0] - 1)];
      if (type[0] == 2)
	champ->reg[(args[1] -1)] = glob->mem[args[0]] % MEM_SIZE;
      if (type[0] == 3)
	champ->reg[(args[1] - 1)] = (champ->pc + args[0] % IDX_MOD) % MEM_SIZE;
      champ->carry = '1';
    }
}
