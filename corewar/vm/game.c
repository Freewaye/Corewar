/*
** game.c for game in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:57:05 2012 florian dell'aiera
** Last update Sun Mar 25 17:57:05 2012 florian dell'aiera
*/

#include	"../vm.h"

void		game(t_glob *glob)
{
  int		i;
  t_champ	*pt;

  i = 0;
  while ((check_champ(glob)) == 1)
    {
      check_cycle_to_die(glob);
      while (glob->champ[i])
	{
	  update_champion(glob->champ[i], glob);
	  pt = glob->champ[i];
	  if (pt->alive == 1 && pt->cycle_next_ins == 0)
	    if (exec(glob, glob->champ[i]) == 0)
	      pt->pc++;
	  i++;
	}
      i = 0;
      glob->cycles++;
    }
  my_putstr("\n\n++\nEnd of game\n++\n\n");
}
