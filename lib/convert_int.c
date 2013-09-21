/*
** convert_int.c for convert in /home/knocka_a/korewar/lib
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Tue Mar 20 14:44:30 2012 antoine knockaert
** Last update Tue Mar 20 14:44:37 2012 antoine knockaert
*/

#include	"my.h"

int		convert_int(int i)
{
  char		tmp;
  char		*s;

  s = (char *) &i;
  tmp = s[3];
  s[3] = s[0];
  s[0] = tmp;
  tmp = s[2];
  s[2] = s[1];
  s[1] = tmp;
  return (i);
}
