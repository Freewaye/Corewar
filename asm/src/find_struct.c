/*
** find_struct.c for find_struct in /home/dell-a_f/korewar/assembleur
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sat Mar 10 15:05:14 2012 florian dell'aiera
** Last update Fri Mar 23 00:25:43 2012 antoine knockaert
*/

#include	"../asm.h"

op_t		*find_struct(char *str)
{
  int		i;

  i = 0;
  while ((&op_tab[i])->code != 0)
    {
      if ((my_match(str, (&op_tab[i])->mnemonique)) == 1)
	return (&op_tab[i]);
      i++;
    }
  return (NULL);
}
