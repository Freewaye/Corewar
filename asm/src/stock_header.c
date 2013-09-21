/*
** stock_header.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:11:19 2012 ghais bensafia
** Last update Sun Mar 25 15:28:32 2012 antoine knockaert
*/

#include	"../asm.h"

static void	add_info(t_glob *glob, t_list *list, int opt)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  if (opt == 0)
    {
      while (list->line[i] && list->line[i] != 34)
	i++;
      i++;
      while (list->line[i] && list->line[i] != 34)
	glob->header->prog_name[j++] = list->line[i++];
    }
  else
    {
      while (list->line[i] && list->line[i] != 34)
	i++;
      i++;
      while (list->line[i] && list->line[i] != 34)
	glob->header->comment[j++] = list->line[i++];
    }
}

static void	complete_header(t_glob *glob)
{
  t_list	*list;

  list = glob->list;
  while (list)
    {
      if (beg_match(list->line, NAME_CMD_STRING))
	{
	  if (my_strlen(list->line) <= PROG_NAME_LENGTH)
	    add_info(glob, list, 0);
	  else
	    my_errex("asm-error: Name too long\n");
	}
      if (beg_match(list->line, COMMENT_CMD_STRING))
	{
	  if (my_strlen(list->line) <= COMMENT_LENGTH)
	    add_info(glob, list, 1);
	  else
	    my_errex("asm-error: Comment too long\n");
	}
      list = list->next;
    }
}

void		stock_header(t_glob *glob, int fd)
{
  complete_header(glob);
  glob->header->prog_size = glob->counter;
  glob->header->prog_size = convert_int(glob->header->prog_size);
  glob->header->magic = convert_int(glob->header->magic);
  if (write(fd, glob->header, sizeof(header_t)) == -1)
    my_errex("asm-error: Impossible to write header\n");
}
