/*
** is_to_parse.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:07:39 2012 ghais bensafia
** Last update Sat Mar 24 22:07:40 2012 ghais bensafia
*/

#include	"../asm.h"

int		is_to_parse(t_list *list)
{
  if (list && list->line[0] == COMMENT_CHAR)
    return (0);
  if (list && beg_match(list->line, NAME_CMD_STRING) == 1)
    return (0);
  if (list && beg_match(list->line, COMMENT_CMD_STRING) == 1)
    return (0);
  return (1);
}
