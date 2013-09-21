/*
** gere_file.c for smùlksd in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:04:28 2012 ghais bensafia
** Last update Sun Mar 25 13:50:05 2012 antoine knockaert
*/

#include	"../asm.h"

void		gere_file(char *file)
{
  t_glob	*glob;

  glob = xmalloc(sizeof(t_glob));
  init_list(glob, file);
  glob->header = xmalloc(sizeof(header_t));
  init_header(glob->header);
  stock_file(glob);
  parse(glob);
  aff_list(glob);
  my_putstr("Compiling ");
  my_putstr(glob->filename);
  my_putstr("... DONE.\n");
  free_all(glob);
}
