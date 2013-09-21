/*
** my_strlen.c for strlen in /home/knocka_a/rendu/c/allum1_reseau/lib
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Fri Feb  3 13:32:37 2012 antoine knockaert
** Last update Sun Mar 11 00:10:48 2012 antoine knockaert
*/

#include	"my.h"

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str && str[i])
    i++;
  return (i);
}
