/*
** handle.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:05:26 2012 ghais bensafia
** Last update Sun Mar 25 12:34:31 2012 antoine knockaert
*/

#include	"../asm.h"

int	handle_reg(t_list *list, char *str, t_glob *glob)
{
  int	nb;

  if (detect_label_in_str(str) == 1)
    return (handle_lbl(list, str, glob));
  if (my_strlen(str) > 1)
    nb = my_getnbr(str + 1);
  put_char_in_int(list, nb, 1, glob);
  return (1);
}

int	handle_dir(t_list *list, char *str, t_glob *glob)
{
  int	nb;

  if (detect_label_in_str(str) == 1)
    return (handle_lbl(list, str, glob));
  if (my_strlen(str) > 1)
    nb = my_getnbr(str + 1);
  put_char_in_int(list, nb, DIR_SIZE, glob);
  return (1);
}

int	handle_ind(t_list *list, char *str, t_glob *glob)
{
  int	nb;

  if (detect_label_in_str(str) == 1)
    return (handle_lbl(list, str, glob));
  if (str[0] == DIRECT_CHAR || str[0] == 'r')
    nb = my_getnbr(str + 1);
  else
    nb = my_getnbr(str);
  if (nb >= IDX_MOD)
    my_errex("asm-error: indirection is too high\n");
  put_char_in_int(list, nb, IND_SIZE, glob);
  return (1);
}
