/*
** add_label_to_list.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:00:08 2012 ghais bensafia
** Last update Sun Mar 25 13:03:32 2012 antoine knockaert
*/

#include	"../asm.h"

void            add_label_to_list(t_glob *glob, char *label)
{
  t_lbl		*maillon;
  t_lbl	        *tmp;

  tmp = glob->lbl;
  maillon = xmalloc(sizeof(t_lbl));
  maillon->next = NULL;
  maillon->label = my_strdup(label);
  maillon->label[my_strlen(maillon->label) - 1] = 0;
  maillon->counter = glob->counter;
  if (glob->lbl == NULL)
    {
      glob->lbl = maillon;
    }
  else
    {
      while (tmp->next)
        tmp = tmp->next;
      tmp->next = maillon;
    }
}
