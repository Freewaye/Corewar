/*
** handle2.c for handle in /home/knocka_a/corewar-2016-knocka_a/assembleur/src
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Sun Mar 25 12:34:03 2012 antoine knockaert
** Last update Sun Mar 25 12:34:27 2012 antoine knockaert
*/

#include	"../asm.h"

int		handle_ldi(t_list *list, char **str, t_glob *glob, int i)
{
  if (str[i + 1][0] == 'r')
    handle_reg(list, str[i + 1], glob);
  else
    handle_ind(list, str[i + 1], glob);
  if (str[i + 2][0] == 'r')
    handle_reg(list, str[i + 2], glob);
  else
    handle_ind(list, str[i + 2], glob);
  choose_size_byte(list, str[i + 3], glob);
  return (1);
}

int		handle_sti(t_list *list, char **str, t_glob *glob, int i)
{
  choose_size_byte(list, str[i + 1], glob);
  if (str[i + 2][0] == 'r')
    handle_reg(list, str[i + 2], glob);
  else
    handle_ind(list, str[i + 2], glob);
  if (str[i + 3][0] == 'r')
    handle_reg(list, str[i + 3], glob);
  else
    handle_ind(list, str[i + 3], glob);
  return (1);
}

int		handle_lbl(t_list *list, char *str, t_glob *glob)
{
  int		len;

  len = len_list(list->line_final);
  if (str[0] == DIRECT_CHAR)
    str = str + 1;
  if (str[0] == LABEL_CHAR)
    str = str + 1;
  put_int_list(list, 255, glob->counter - len , str);
  glob->counter++;
  put_int_list(list, 255, glob->counter - len , str);
  glob->counter++;
  return (1);
}

int		handle_fork_zjmp(t_list *list, char **str, t_glob *glob, int i)
{
  handle_ind(list, str[i + 1], glob);
  return (1);
}
