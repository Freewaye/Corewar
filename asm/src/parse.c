/*
** parse.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:09:16 2012 ghais bensafia
** Last update Sat Mar 24 22:14:59 2012 ghais bensafia
*/

#include	"../asm.h"

void		parse(t_glob *glob)
{
  int		i;
  t_list	*list;
  op_t		*ope;

  i = 1;
  list = glob->list;
  while (list)
    {
      if (is_to_parse(list) == 1)
	{
	  list->cmd = put_command_in_list(list->line);
	  gere_fixed_label(glob, list);
	  ope = opcode(glob, list, i);
	  if (ope != NULL)
	    {
	      des_param(glob, list, i, ope);
	      fill_nb_in_list(list, glob);
	    }
	}
      list = list->next;
      i++;
    }
  fill_label(glob);
}

