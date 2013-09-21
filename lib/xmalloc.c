/*
** xmalloc.c for xmalloc in /home/knocka_a//rendu/lib/my
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Wed Oct 19 09:45:01 2011 antoine knockaert
** Last update Fri Feb  3 14:02:04 2012 antoine knockaert
*/

#include "my.h"

void	*xmalloc(int size)
{
  void	*result;

  result = malloc(size);
  if (result == NULL)
    my_errex("Error on malloc");
  return (result);
}
