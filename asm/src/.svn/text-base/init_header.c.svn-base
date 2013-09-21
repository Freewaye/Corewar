/*
** init_header.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:06:29 2012 ghais bensafia
** Last update Sat Mar 24 22:06:30 2012 ghais bensafia
*/

#include	"../asm.h"

void		init_header(header_t *head)
{
  head->magic = COREWAR_EXEC_MAGIC;
  init_str(head->prog_name, PROG_NAME_LENGTH + 1);
  init_str(head->comment, COMMENT_LENGTH + 1);
  head->prog_size = -1;
}
