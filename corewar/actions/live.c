/*
** live.c for liv in /home/knocka_a/corewar-2016-knocka_a/virtual_m
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Thu Mar 22 14:10:19 2012 antoine knockaert
** Last update Sun Mar 25 19:15:13 2012 antoine knockaert
*/

#include	"../vm.h"

void		live(t_glob *glob, t_champ *champ, int *args, int *type)
{
  t_champ	*tmp;
  op_t		*ins;

  type = type;
  tmp = find_champ(glob, args[0]);
  if (tmp != NULL)
    {
      tmp->cycle_live = 0;
      glob->nbr_live--;
      champ->pc += 5;
      ins = find_struct(1);
      champ->cycle_next_ins = ins->nbr_cycles;
      my_putstr("The player ");
      my_putnbr(args[0]);
      my_putstr(" (");
      my_putstr(tmp->header.prog_name);
      my_putstr(") is alive !\n");
    }
  else
    {
      my_putstr("Invalid live\n");
      champ->pc++;
    }
}
