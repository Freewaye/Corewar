/*
** stock_file.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:11:46 2012 ghais bensafia
** Last update Sun Mar 25 15:33:31 2012 antoine knockaert
*/

#include	"../asm.h"

static void	suppr_com(char *str)
{
  int		i;

  i = 0;
  while (str && str[i])
    {
      if (str[i] == COMMENT_CHAR)
	{
	  str[i] = 0;
	  return ;
	}
      i++;
    }
}

static char	*epur_str(char *str)
{
  int		i;
  int		j;
  char		*s;

  i = 0;
  j = 0;
  s = xmalloc((my_strlen(str) + 10) * sizeof(char));
  init_str(s, my_strlen(str) + 10);
  while (str && str[i] && (str[i] == ' ' || str[i] == '\t'))
    i++;
  while (str && str[i])
    {
      while ( str && str[i] && str[i] != ' ' && str[i] != '\t')
	s[j++] = str[i++];
      s[j++] = ' ';
      while (str && str[i] && (str[i] == ' ' || str[i] == '\t'))
	i++;
    }
  xfree(str);
  return (s);
}

void		stock_file(t_glob *glob)
{
  char		*s;
  int		i;

  i = 0;
  while ((s = get_next_line(glob->fd_file)) != NULL)
    {
      suppr_com(s);
      s = epur_str(s);
      if (s)
	{
	  if (my_strlen(s) > 0)
	    add_to_list(glob, s);
	  else
	    xfree(s);
	}
      i++;
    }
}
