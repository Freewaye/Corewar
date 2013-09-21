/*
** bin_to_int.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:00:56 2012 ghais bensafia
** Last update Sat Mar 24 22:18:28 2012 ghais bensafia
*/

#include	"../asm.h"

int		bin_to_int(char *str)
{
  int		i;
  int		p;
  int		res;

  res = 0;
  i = 0;
  p = my_strlen(str) - 1;
  while (i <= my_strlen(str) - 1)
    {
      if (str[i] == '1')
        {
          res = res + my_pow(2, p);
        }
      p--;
      i++;
    }
  return (res);
}
