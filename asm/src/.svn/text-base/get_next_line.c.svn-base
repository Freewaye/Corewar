/*
** get_next_line.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:05:16 2012 ghais bensafia
** Last update Sat Mar 24 22:22:46 2012 ghais bensafia
*/

#include	"../asm.h"

char	*get_next_line(int fd)
{
  static int	a = 1;
  int		j;
  char		*s;
  static int	cpt = BUFFER_SIZE;
  static char	buff[BUFFER_SIZE];

  s = 0;
  j = 0;
  if (cpt >= (BUFFER_SIZE - 1) && a)
    {
      cpt = 0;
      a = xread(fd, buff, BUFFER_SIZE - 1);
      buff[a] = '\0';
    }
  if (buff[cpt] && cpt < BUFFER_SIZE)
    {
      s = xmalloc(BUFFER_SIZE * sizeof(char));
      while (buff[cpt] != '\n' && buff[cpt])
	s[j++] = buff[cpt++];
      s[j] = '\0';
      if (buff[cpt])
	cpt++;
    }
  return (s);
}
