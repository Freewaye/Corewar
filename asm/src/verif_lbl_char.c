/*
** verif_lbl_char.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sun Mar 25 12:36:49 2012 ghais bensafia
** Last update Sun Mar 25 15:52:44 2012 antoine knockaert
*/

#include	"../asm.h"

static int	is_labels_char(char c, char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (c == str[i])
	return (1);
      i++;
    }
  return (0);
}

void		verif_lbl_char(char *str)
{
  int		i;
  char		*s;
  char		*s2;

  i = 0;
  s = my_strdup(LABEL_CHARS);
  s2 = my_strdup(str);
  s2[my_strlen(s2) - 1] = 0;
  while (s2[i])
    {
      if (is_labels_char(s2[i], s) == 0)
	my_errex("asm-error: invalid character in label\n");
      i++;
    }
  xfree(s);
  xfree(s2);
}
