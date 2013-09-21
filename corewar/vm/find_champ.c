/*
** find_champ.c for find_champ in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:56:45 2012 florian dell'aiera
** Last update Sun Mar 25 18:07:21 2012 florian dell'aiera
*/

#include	"../vm.h"

t_champ		*find_champ(t_glob *glob, int nb)
{
  int		i;
  t_champ	*pt;

  i = 0;
  while (glob->champ[i])
    {
      pt = glob->champ[i];
      if (nb == pt->champ_nb)
	return (pt);
      i++;
    }
  return (NULL);
}
