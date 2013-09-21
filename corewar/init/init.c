/*
** init.c for init in /home/dell-a_f/corewar-2016-knocka_a
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:53:08 2012 florian dell'aiera
** Last update Sun Mar 25 17:53:09 2012 florian dell'aiera
*/

#include	"../vm.h"

void		init(t_glob *glob, int ac, char **av)
{
  av_error(ac, av);
  gere_av(glob, av);
}
