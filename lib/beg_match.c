/*
** beg_match.c for beg_match in /home/knocka_a/korewar
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Sun Mar 11 01:22:55 2012 antoine knockaert
** Last update Sun Mar 11 01:28:27 2012 antoine knockaert
*/

#include	"my.h"

int		beg_match(char *str1, char *str2)
{
  int		i;

  i = 0;
  while (str1[i] && str2[i])
    {
      if (str1[i] != str2[i])
	return (0);
      i++;
    }
  return (1);
}
