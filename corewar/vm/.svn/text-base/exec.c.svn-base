/*
** exec.c for exec in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:55:35 2012 florian dell'aiera
** Last update Sun Mar 25 18:57:44 2012 antoine knockaert
*/

#include	"../vm.h"

int		exec(t_glob *glob, t_champ *pt)
{
  int		op_code;
  int		args[MAX_ARGS_NUMBER];
  int		*type;

  pt->pc = pt->pc % MEM_SIZE;
  op_code = glob->mem[pt->pc];
  type = xmalloc(sizeof(int) * 4);
  if (op_code > 0 && op_code <= 16)
    {
      if (glob->ptr_func[op_code] != NULL)
	{
	  type = recup_args(glob, pt, args, op_code);
	  glob->ptr_func[op_code](glob, pt, args, type);
	  xfree(type);
	  return (1);
	}
    }
  return (0);
}
