/*
** put_int_list.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:13:01 2012 ghais bensafia
** Last update Sat Mar 24 22:13:03 2012 ghais bensafia
*/

#include	"../asm.h"

void		put_int_list(t_list *list, int nb, int lbl, char *str)
{
  t_intl	*link;
  t_intl	*tmp;

  tmp = list->line_final;
  link = xmalloc(sizeof(t_intl));
  link->next = NULL;
  link->nb = nb;
  link->label_counter = lbl;
  link->label = my_strdup(str);
  if (list->line_final == NULL)
    {
      list->line_final = link;
    }
  else
    {
      while (tmp->next)
	tmp = tmp->next;
      tmp->next = link;
    }
}
