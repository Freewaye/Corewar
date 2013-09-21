/*
** check_open.c for open in /home/dell-a_f/corewar-2016-knocka_a
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:54:33 2012 florian dell'aiera
** Last update Sun Mar 25 17:54:37 2012 florian dell'aiera
*/

#include	"../vm.h"

void		check_open(t_glob *glob)
{
  int		i;
  t_champ	*tmp;

  i = 0;
  while (glob->champ[i])
    {
      tmp = glob->champ[i];
      tmp->fd = open(tmp->filename, O_RDONLY);
      if (tmp->fd == -1)
	{
	  my_putstr("vm-error: champion not found\n");
	  exit(EXIT_FAILURE);
	}
      i++;
    }
}
