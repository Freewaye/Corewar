/*
** my_tablen.c for my_tablen in /home/knocka_a/rendu/c/allum1_reseau/lib
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Fri Feb  3 13:33:39 2012 antoine knockaert
** Last update Fri Feb  3 13:34:21 2012 antoine knockaert
*/

#include	"my.h"

int		my_tablen(char **tabl)
{
  int		i;

  i = 0;
  while (tabl[i])
    i++;
  return (i);
}
