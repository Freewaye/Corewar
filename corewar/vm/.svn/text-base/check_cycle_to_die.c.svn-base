/*
** check_cycle_to_die.c for check in /home/dell-a_f/corewar-2016-knocka_a
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:54:26 2012 florian dell'aiera
** Last update Sun Mar 25 17:54:27 2012 florian dell'aiera
*/

#include	"../vm.h"

void		check_cycle_to_die(t_glob *glob)
{
  if (glob->nbr_live == 0)
    {
      if (glob->dies == 0)
	glob->cycle_to_die = glob->cycle_to_die - CYCLE_DELTA;
      glob->nbr_live = NBR_LIVE;
      glob->dies = 0;
    }
}
