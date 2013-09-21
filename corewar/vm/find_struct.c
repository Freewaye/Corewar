/*
** find_struct.c for find_struct in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:56:54 2012 florian dell'aiera
** Last update Sun Mar 25 17:56:55 2012 florian dell'aiera
*/

#include	"../vm.h"

op_t		*find_struct(int code)
{
  int		i;

  i = 0;
  while ((&op_tab[i])->code != 0)
    {
      if ((char)(code) == (&op_tab[i])->code)
	return (&op_tab[i]);
      i++;
    }
  return (NULL);
}
