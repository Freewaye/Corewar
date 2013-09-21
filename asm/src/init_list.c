/*
** init_list.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:06:38 2012 ghais bensafia
** Last update Sat Mar 24 22:06:39 2012 ghais bensafia
*/

#include	"../asm.h"

void	init_list(t_glob *glob, char *file)
{
  glob->list = NULL;
  glob->lbl = NULL;
  glob->filename = my_strdup(file);
  glob->fd_file = open(file, O_RDONLY);
  glob->counter = 0;
  if (glob->fd_file == -1)
    {
      my_putstr("Error on OPEN/n");
      exit(1);
    }
}
