/*
** fill_nb_in_list.c for mdklksdq in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:01:56 2012 ghais bensafia
** Last update Sun Mar 25 14:38:44 2012 ghais bensafia
*/

#include	"../asm.h"

int		choose_size_byte(t_list	*list, char *str, t_glob *glob)
{
  if (str[0] == 'r')
    return (handle_reg(list, str, glob));
  else if (str[0] == DIRECT_CHAR)
    {
      if (str[1] == LABEL_CHAR)
	return (handle_lbl(list, str, glob));
      else
	return (handle_dir(list, str, glob));
    }
  else if (str[0] == LABEL_CHAR)
    return (handle_lbl(list, str, glob));
  else if (((str[0] >= '0') && (str[0] <= '9')) || (str[0] == '-'))
    return (handle_ind(list, str, glob));
  return (0);
}

int		fill_nb_in_list(t_list *list, t_glob *glob)
{
  int		a;
  int		i;

  i = 0;
  a = 1;
  if (is_label(list->cmd[0]) == 1)
    i++;
  while ((list) && (list->cmd) && (list->cmd[a]))
    {
      if (is_index_func(list->cmd[i]) == 2)
	return (handle_sti(list, list->cmd, glob, i));
      else if (is_index_func(list->cmd[i]) == 3)
	return (handle_ldi(list, list->cmd, glob, i));
      else if (is_index_func(list->cmd[i]) == 4)
	return (handle_fork_zjmp(list, list->cmd, glob, i));
      else if (is_index_func(list->cmd[i]) == 1)
	return (handle_ind(list, list->cmd[a], glob));
      else if (is_index_func(list->cmd[i]) == 0)
	choose_size_byte(list, list->cmd[a], glob);
      a++;
      i++;
    }
  return (0);
}
