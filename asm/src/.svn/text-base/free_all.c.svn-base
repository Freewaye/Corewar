/*
** free_all.c for free in /home/knocka_a/corewar-2016-knocka_a/assembleur/src
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Sun Mar 25 13:13:49 2012 antoine knockaert
** Last update Sun Mar 25 15:31:56 2012 antoine knockaert
*/

#include	"../asm.h"

static void	free_char_dbl(char **str)
{
  int		i;

  i = 0;
  while (str && str[i])
    {
      xfree(str[i]);
      i++;
    }
  xfree(str);
}

static void	free_lbl(t_lbl *begin)
{
  t_lbl		*tmp;

  while (begin)
    {
      xfree(begin->label);
      tmp = begin;
      begin = begin->next;
      xfree(tmp);
    }
}

static void	free_lines(t_list *list)
{
  t_list	*tmp;
  t_intl	*intl;
  t_intl	*tmp2;

  while (list)
    {
      xfree(list->line);
      free_char_dbl(list->cmd);
      intl = list->line_final;
      while (intl)
	{
	  tmp2 = intl;
	  xfree(intl->label);
	  intl = intl->next;
	  xfree(tmp2);
	}
      tmp = list;
      list = list->next;
      xfree(tmp);
    }
}

void		free_all(t_glob *glob)
{
  free_lbl(glob->lbl);
  xfree(glob->filename);
  xfree(glob->new_file);
  xfree(glob->header);
  free_lines(glob->list);
  xfree(glob);
}
