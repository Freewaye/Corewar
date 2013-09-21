/*
** fill_label.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Fri Mar 23 10:45:48 2012 ghais bensafia
** Last update Sun Mar 25 15:30:30 2012 antoine knockaert
*/

#include	"../asm.h"

static void	complete_label(t_glob *glob, t_intl *byte)
{
  t_lbl		*l;
  int		nb;

  nb = 0;
  l = glob->lbl;
  while (l)
    {
      if ((l) && (l->label) && (byte) && (byte->label))
	{
	  if (my_match(l->label, byte->label))
	    {
	      nb = (l->counter) - (byte->label_counter);
	      fill_label_list(byte, nb);
	      return ;
	    }
	}
      l = l->next;
    }
  my_putstr("asm-error: Invalid label (");
  my_putstr(byte->label);
  my_errex(")\n");
}

void		fill_label(t_glob *glob)
{
  t_list	*list;
  t_intl	*byte;

  list = glob->list;
  while (list)
    {
      byte = list->line_final;
      while (byte)
	{
	  if (byte->label_counter != -2)
	    complete_label(glob, byte);
	  byte = byte->next;
	}
      list = list->next;
    }
}
