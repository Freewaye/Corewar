/*
** check_champ.c for vm in /home/dell-a_f/corewar-2016-knocka_a
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:54:16 2012 florian dell'aiera
** Last update Sun Mar 25 17:54:17 2012 florian dell'aiera
*/

#include	"../vm.h"

int		check_champ(t_glob *glob)
{
  int		i;
  t_champ	*pt;

  i = 0;
  while (glob->champ[i])
    {
      pt = glob->champ[i];
      if (pt->alive == 1)
	return (1);
      i++;
    }
  return (0);
}
