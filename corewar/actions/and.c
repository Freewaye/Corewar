/*
** and.c for and in /home/dell-a_f/corewar-2016-knocka_a/virtual_m/actions
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Fri Mar 23 15:46:24 2012 florian dell'aiera
** Last update Sun Mar 25 18:53:38 2012 antoine knockaert
*/

#include	"../vm.h"

void		type_register(t_glob *glob, t_champ *champ, int *args, int *type)
{
  int		fst_r;
  int		fst_indirect;

  fst_r = champ->reg[(args[0] - 1)];
  fst_indirect = ((champ->pc + args[1] % IDX_MOD) %  MEM_SIZE);
  if (type[1] == 1)
    champ->reg[(args[2] - 1)] = fst_r & champ->reg[(args[1] - 1)];
  if (type[1] == 2)
    champ->reg[(args[2] - 1)] = fst_r & (glob->mem[args[1]] % MEM_SIZE);
  if (type[1] == 3)
    champ->reg[(args[2] - 1)] = fst_r & fst_indirect;
}

void		type_direct(t_glob *glob, t_champ *champ, int *args, int *type)
{
  int		fst_direct;
  int		second_indirect;

  fst_direct = (glob->mem[args[0]] % MEM_SIZE);
  second_indirect = ((champ->pc + args[1] % IDX_MOD) %  MEM_SIZE);
  if (type[1] == 1)
    champ->reg[(args[2] - 1)] = fst_direct & champ->reg[(args[1] - 1)];
  if (type[1] == 2)
    champ->reg[(args[2] - 1)] = fst_direct & (glob->mem[args[1]] % MEM_SIZE);
  if (type[1] == 3)
    champ->reg[(args[2] - 1)] = fst_direct & second_indirect;
}

void		type_indirect(t_glob *glob, t_champ *champ, int *args, int *type)
{
  int		fst_indirect;
  int		second_indirect;

  fst_indirect = ((champ->pc + args[0] % IDX_MOD) %  MEM_SIZE);
  second_indirect = ((champ->pc + args[1] % IDX_MOD) %  MEM_SIZE);
  if (type[1] == 1)
    champ->reg[(args[2] - 1)] = fst_indirect & champ->reg[(args[1] - 1)];
  if (type[1] == 2)
    champ->reg[(args[2] - 1)] = fst_indirect & (glob->mem[args[1]] % MEM_SIZE);
  if (type[1] == 3)
    champ->reg[(args[2] - 1)] = fst_indirect & second_indirect;
}

void		and(t_glob *glob, t_champ *champ, int *args, int *type)
{
  op_t		*ins;

  if (champ != NULL)
    {
      ins = find_struct(6);
      champ->cycle_next_ins = ins->nbr_cycles;
      if (type[0] == 1)
	type_register(glob, champ, args, type);
      if (type[0] == 2)
	type_direct(glob, champ, args, type);
      if (type[0] == 3)
	type_indirect(glob, champ, args, type);
      champ->carry = '1';
    }
}
