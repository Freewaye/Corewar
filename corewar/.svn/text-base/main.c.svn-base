/*
** main.c for main in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:52:36 2012 florian dell'aiera
** Last update Sun Mar 25 19:19:26 2012 antoine knockaert
*/

#include	"vm.h"

int		main(int ac, char **av)
{
  t_glob	*glob;

  glob = xmalloc(sizeof(t_glob));
  init(glob, ac, av);
  check_open(glob);
  init_vm(glob);
  init_champ(glob);
  game(glob);
  return (0);
}
