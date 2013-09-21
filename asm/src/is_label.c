/*
** is_label.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:07:08 2012 ghais bensafia
** Last update Sat Mar 24 22:07:09 2012 ghais bensafia
*/

#include	"../asm.h"

int		is_label(char *str)
{
  int		len;

  len = my_strlen(str);
  if (len > 0)
    {
      if (str[len - 1] == LABEL_CHAR)
	return (1);
    }
  return (0);
}
