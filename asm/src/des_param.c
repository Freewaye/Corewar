/*
** des_param.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:01:09 2012 ghais bensafia
** Last update Sun Mar 25 15:30:09 2012 antoine knockaert
*/

#include	"../asm.h"

static void	verify_params_type(t_list *list, int line, op_t *ope)
{
  args_type_t	current;
  args_type_t	result;
  int		i;
  int		j;

  i = 1;
  j = 0;
  if (list && list->cmd && list->cmd[0] && is_label(list->cmd[0]))
    i++;
  while (list && list->cmd && list->cmd[i] && ope->type && ope->type[j])
    {
      if (list->cmd[i][0] == DIRECT_CHAR)
	current = T_DIR;
      else if (list->cmd[i][0] == 'r')
	current = T_REG;
      else
	current = T_IND;
      result = current & ope->type[j];
      if (result == 0)
	asm_error("param (Bad type)", line);
      j++;
      i++;
    }
}

static void	verify_params(t_list *list, int line, op_t *ope)
{
  int		i;
  int		j;

  j = 0;
  i = -1;
  if (is_label(list->cmd[0]) == 1)
    i -= 1;
  while (list->cmd[j])
    j++;
  i = i + j;
  if (i != ope->nbr_args)
    asm_error("argument (Bad number)", line);
  verify_params_type(list, line, ope);
}

static void	put_bin(char *bin, char *puts)
{
  int		size;

  size = my_strlen(bin);
  if (size + 1 <= 7)
    {
      bin[size] = puts[0];
      bin[size + 1] = puts[1];
    }
}

static void	put_desc(t_glob *glob, t_list *list, char *bin)
{
  int		code;

  code = bin_to_int(bin);
  put_int_list(list, code, -2, "");
  glob->counter += 1;
}

void		des_param(t_glob *glob, t_list *list, int line, op_t *ope)
{
  int		i;
  char		bin[9];

  init_str(bin, 9);
  verify_params(list, line, ope);
  if (ope->code != 1 && ope->code != 9 && ope->code != 12 && ope->code != 15)
    {
      i = 1;
      if (list && list->cmd && list->cmd[0] && is_label(list->cmd[0]))
	i++;
      while (list && list->cmd && list->cmd[i])
	{
	  if (list->cmd[i][0] == DIRECT_CHAR)
	    put_bin(bin, "10");
	  else if (list->cmd[i][0] == 'r')
	    put_bin(bin, "01");
	  else
	    put_bin(bin, "11");
	  i++;
	}
      i = my_strlen(bin);
      while (i <= 7)
	bin[i++] = '0';
      put_desc(glob, list, bin);
    }
}
