/*
** asm_error.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:00:40 2012 ghais bensafia
** Last update Sat Mar 24 22:00:41 2012 ghais bensafia
*/

#include	"../asm.h"

void		asm_error(char *type, int line)
{
  my_putstr("asm-error: Invalid ");
  my_putstr(type);
  my_putstr(" on line ");
  my_putnbr(line);
  my_putstr(".\n");
  exit(EXIT_FAILURE);
}
