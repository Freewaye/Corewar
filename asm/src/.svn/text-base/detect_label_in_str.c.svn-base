/*
** detect_label_in_str.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:01:26 2012 ghais bensafia
** Last update Sun Mar 25 12:37:03 2012 antoine knockaert
*/

#include	"../asm.h"

int		detect_label_in_str(char *str)
{
  if (str[0] == LABEL_CHAR)
    return (1);
  if ((str[0] == DIRECT_CHAR) && (str[1] == LABEL_CHAR))
    return (1);
  return (0);
}
