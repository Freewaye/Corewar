/*
** xor.c for xor in /home/dell-a_f/corewar-2016-knocka_a/virtual_m/actions
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sat Mar 24 11:25:56 2012 florian dell'aiera
** Last update Sat Mar 24 17:31:03 2012 florian dell'aiera
*/

#include	"../vm.h"

void		type_register_xor(t_glob *glob, t_champ *champ, int *args, int *type)
{
  int		fst_r;
  int		fst_indirect;

  fst_r = champ->reg[(args[0] - 1)];
  fst_indirect = ((champ->pc + args[1] % IDX_MOD) %  MEM_SIZE);
  if (type[1] == 1)
    champ->reg[(args[2] - 1)] = fst_r ^ champ->reg[(args[1] - 1)];
  if (type[1] == 2)
    champ->reg[(args[2] - 1)] = fst_r ^ (glob->mem[args[1]] % MEM_SIZE);
  if (type[1] == 3)
    champ->reg[(args[2] - 1)] = fst_r ^ fst_indirect;
}

void		type_direct_xor(t_glob *glob, t_champ *champ, int *args, int *type)
{
  int		fst_direct;
  int		second_indirect;

  fst_direct = (glob->mem[args[0]] % MEM_SIZE);
  second_indirect = ((champ->pc + args[1] % IDX_MOD) %  MEM_SIZE);
  if (type[1] == 1)
    champ->reg[(args[2] - 1)] = fst_direct ^ champ->reg[(args[1] - 1)];
  if (type[1] == 2)
    champ->reg[(args[2] - 1)] = fst_direct ^ (glob->mem[args[1]] % MEM_SIZE);
  if (type[1] == 3)
    champ->reg[(args[2] - 1)] = fst_direct ^ second_indirect;
}

void		type_indirect_xor(t_glob *glob, t_champ *champ, int *args, int *type)
{
  int		fst_indirect;
  int		second_indirect;

  fst_indirect = ((champ->pc + args[0] % IDX_MOD) %  MEM_SIZE);
  second_indirect = ((champ->pc + args[1] % IDX_MOD) %  MEM_SIZE);
  if (type[1] == 1)
    champ->reg[(args[2] - 1)] = fst_indirect ^ champ->reg[(args[1] - 1)];
  if (type[1] == 2)
    champ->reg[(args[2] - 1)] = fst_indirect ^ (glob->mem[args[1]] % MEM_SIZE);
  if (type[1] == 3)
    champ->reg[(args[2] - 1)] = fst_indirect ^ second_indirect;
}

void		xor(t_glob *glob, t_champ *champ, int *args, int *type)
{
  op_t		*ins;

  if (champ != NULL)
    {
      ins = find_struct(6);
      champ->cycle_next_ins = ins->nbr_cycles;
      if (type[0] == 1)
	type_register_xor(glob, champ, args, type);
      if (type[0] == 2)
	type_direct_xor(glob, champ, args, type);
      if (type[0] == 3)
	type_indirect_xor(glob, champ, args, type);
      champ->carry = '1';
    }
}
