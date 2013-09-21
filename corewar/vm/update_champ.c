/*
** update_champ.c for update in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:57:18 2012 florian dell'aiera
** Last update Sun Mar 25 17:57:21 2012 florian dell'aiera
*/

#include	"../vm.h"

void		update_champion(t_champ *pt, t_glob *glob)
{
  if (pt->cycle_live > glob->cycle_to_die)
    {
      pt->alive = 0;
      my_putstr("The player ");
      my_putnbr(pt->champ_nb);
      my_putstr(" (");
      my_putstr(pt->header.prog_name);
      my_putstr(") died !\n");
      glob->dies = glob->dies + 1;
    }
  else if (pt->alive == 1)
    {
      pt->cycle_live++;
      if (pt->cycle_next_ins > 0)
	pt->cycle_next_ins--;
    }
}
