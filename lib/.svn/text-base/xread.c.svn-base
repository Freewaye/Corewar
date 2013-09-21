/*
** xread.c for xread in /home/knocka_a/rendu/c/allum1_reseau/lib
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Fri Feb  3 13:35:47 2012 antoine knockaert
** Last update Mon Feb 13 14:47:44 2012 florian dell'aiera
*/

#include	"my.h"

int		xread(int fd, char *buffer, int size)
{
  int		ret;

  ret = read(fd, buffer, size);
  if (ret == -1)
    my_errex("Error on read\n");
  return (ret);
}
