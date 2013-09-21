/*
** add.c for add in /home/dell-a_f/corewar-2016-knocka_a/virtual_m/actions
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Fri Mar 23 14:27:55 2012 florian dell'aiera
** Last update Sun Mar 25 18:12:47 2012 florian dell'aiera
*/

#include	"../vm.h"

void		add(t_glob *glob, t_champ *champ, int *args, int *type)
{
  op_t		*ins;
  int		first_r;
  int		second_r;

  glob = glob;
  type = type;
  first_r = champ->reg[(args[0] - 1)];
  second_r = champ->reg[(args[1] - 1)];
  if (champ != NULL)
    {
      ins = find_struct(4);
      champ->cycle_next_ins = ins->nbr_cycles;
      champ->reg[(args[2] - 1)] = first_r + second_r;
      champ->carry = '1';
    }
}
