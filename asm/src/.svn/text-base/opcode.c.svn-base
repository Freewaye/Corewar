/*
** opcode.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:08:08 2012 ghais bensafia
** Last update Sat Mar 24 22:08:35 2012 ghais bensafia
*/

#include	"../asm.h"

op_t		*opcode(t_glob *glob, t_list *list, int i)
{
  op_t		*tab;
  char		*cmd;

  if (list->cmd[0])
    {
      if (is_label(list->cmd[0]) == 0)
	cmd = list->cmd[0];
      else if (list->cmd[1] && is_label(list->cmd[1]) == 0)
	cmd = list->cmd[1];
      else
	return (NULL);
      tab = find_struct(cmd);
      if (tab != NULL)
	{
	  put_int_list(list, tab->code, -2, "");
	  glob->counter++;
	  return (tab);
	}
      else
	asm_error("opcode", i);
    }
  asm_error("opcode", i);
  return (NULL);
}
