/*
** add_to_list.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:00:19 2012 ghais bensafia
** Last update Sat Mar 24 22:00:20 2012 ghais bensafia
*/

#include	"../asm.h"

void		add_to_list(t_glob *glob, char *line)
{
  t_list	*maillon;
  t_list	*tmp;

  maillon = xmalloc(sizeof(t_list));
  maillon->line = line;
  maillon->cmd = NULL;
  maillon->line_final = NULL;
  maillon->next = NULL;
  tmp = glob->list;
  if (glob->list == NULL)
    {
      maillon->prev = NULL;
      glob->list = maillon;
    }
  else
    {
      while (tmp->next)
	tmp = tmp->next;
      maillon->prev = tmp;
      tmp->next = maillon;
    }
}
