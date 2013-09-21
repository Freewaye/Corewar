/*
** is_index_func.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:06:47 2012 ghais bensafia
** Last update Sat Mar 24 22:06:48 2012 ghais bensafia
*/

#include	"../asm.h"

int		is_index_func(char *str)
{
  if (my_match(str, "zjmp") == 1)
    return (4);
  if (my_match(str, "fork") == 1)
    return (4);
  if (my_match(str, "lfork") == 1)
    return (4);
  if (my_match(str, "lldi") == 1)
    return (3);
  if (my_match(str, "sti") == 1)
    return (2);
  if (my_match(str, "ldi") == 1)
    return (3);
  return (0);
}
