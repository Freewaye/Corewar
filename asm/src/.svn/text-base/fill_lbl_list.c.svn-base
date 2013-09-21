/*
** fill_lbl_list.c for mskdf in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:02:42 2012 ghais bensafia
** Last update Sun Mar 25 12:38:49 2012 antoine knockaert
*/

#include	"../asm.h"

void		fill_label_list(t_intl *list, int nb)
{
  int	b;
  unsigned char	*s;

  b = 1;
  s = (unsigned char *) &nb;
  if (list)
    list->nb = (unsigned char) s[b];
  b--;
  if (list->next)
    {
      list->next->nb = (unsigned char) s[b];
      list->next->label_counter = -2;
    }
}
