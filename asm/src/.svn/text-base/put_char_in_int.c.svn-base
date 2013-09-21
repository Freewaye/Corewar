/*
** put_char_in_int.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:14:19 2012 ghais bensafia
** Last update Sat Mar 24 22:14:23 2012 ghais bensafia
*/

#include	"../asm.h"

void		put_char_in_int(t_list *list, int nb, int size, t_glob *glob)
{
  int	a;
  int	b;
  unsigned char	*s;

  a = 0;
  b = size - 1;
  s = (unsigned char *) &nb;
  while (a < size)
    {
      put_int_list(list, s[b], -2, "");
      glob->counter++;
      a++;
      b--;
    }
}
