/*
** len_list.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:07:53 2012 ghais bensafia
** Last update Sat Mar 24 22:07:54 2012 ghais bensafia
*/

#include	"../asm.h"

int		len_list(t_intl *list)
{
  t_intl	*tmp;
  int		a;

  a = 0;
  tmp = list;
  while (tmp)
    {
      tmp = tmp->next;
      a++;
    }
  return (a);
}
