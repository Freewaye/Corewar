/*
** gere_fixed_label.c for corewar  in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:04:53 2012 ghais bensafia
** Last update Sun Mar 25 13:04:43 2012 antoine knockaert
*/

#include	"../asm.h"

void		gere_fixed_label(t_glob *glob, t_list *list)
{
  if ((list->cmd) && (list->cmd[0]))
    {
      if (is_label(list->cmd[0]) == 1)
	{
	  verif_lbl_char(list->cmd[0]);
	  add_label_to_list(glob, list->cmd[0]);
	}
    }
}
