/*
** recup_int.c for toto in /home/knocka_a/corewar-2016-knocka_a/virtual_m
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Thu Mar 22 15:36:05 2012 antoine knockaert
** Last update Sun Mar 25 18:07:21 2012 florian dell'aiera
*/

#include	"../vm.h"

int		recup_int(char *mem, int i, int size)
{
  int		result;
  char		*s;
  int		j;

  j = size - 1;
  result = 0;
  if (size < 0 || size > 5 || mem == NULL)
    my_errex("vm: Error in params\n");
  i = i % MEM_SIZE;
  s = (char *) &result;
  while (j >= 0)
    {
      s[j] = mem[i];
      i++;
      j--;
    }
  return (result);
}
