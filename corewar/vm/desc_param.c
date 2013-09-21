/*
** desc_param.c for desc_param in /home/dell-a_f/corewar-2016-knocka_a
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:54:45 2012 florian dell'aiera
** Last update Sun Mar 25 18:57:30 2012 antoine knockaert
*/

#include	"../vm.h"

char		*desc_param(int c)
{
  int		nb;
  int		i;
  int		j;
  char		*str;
  char		*tmp;

  i = 0;
  j = 0;
  nb = c;
  str = xmalloc(sizeof(char) * 9);
  tmp = xmalloc(sizeof(char) * 9);
  init_str(tmp, 9);
  while (nb != 0)
    {
      if (nb % 2 == 0)
	str[j++] = '0';
      if (nb % 2 == 1)
	str[j++] = '1';
      nb = nb / 2;
    }
  j--;
  while (j >= 0)
    tmp[i++] = str[j--];
  tmp = fill(tmp);
  return (tmp);
}
