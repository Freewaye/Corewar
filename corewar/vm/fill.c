/*
** fill.c for fill in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:55:41 2012 florian dell'aiera
** Last update Sun Mar 25 19:27:04 2012 antoine knockaert
*/

#include	"../vm.h"

char		*fill(char *str)
{
  int		i;
  int		j;
  int		k;
  char		*s;

  i = 0;
  k = 0;
  s = xmalloc(sizeof(char) * 9);
  init_str(s, 9);
  while (str[i])
    i++;
  j = 8 - i;
  while (k != j)
    s[k++] = '0';
  i = 0;
  while (str[i])
    s[k++] = str[i++];
  s[k] = '\0';
  return (s);
}
