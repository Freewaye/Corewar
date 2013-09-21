/*
** xwrite.c for xwrite in /home/knocka_a/rendu/c/allum1_reseau/lib
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Fri Feb  3 13:37:11 2012 antoine knockaert
** Last update Fri Feb  3 13:37:57 2012 antoine knockaert
*/

#include	"my.h"

int		xwrite(int fd, char *str, int size)
{
  int		ret;

  ret = write(fd, str, size);
  if (ret == -1)
    my_errex("Error on write");
  return (ret);
}
