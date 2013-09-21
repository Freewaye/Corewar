/*
** aff_list.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:00:27 2012 ghais bensafia
** Last update Sun Mar 25 15:29:16 2012 antoine knockaert
*/

#include	"../asm.h"

static void	gere_filename(t_glob *glob)
{
  int		i;
  int		j;
  char		*tmp;

  i = 0;
  j = 0;
  glob->new_file = xmalloc((my_strlen(glob->filename) + 10) * sizeof(char));
  while (glob->filename[i] && glob->filename[i] != '.')
    glob->new_file[j++] = glob->filename[i++];
  glob->new_file[j] = 0;
  tmp = glob->new_file;
  glob->new_file = concat(glob->new_file, ".cor");
  free(tmp);
}

static void	stock(t_glob *glob, int fd)
{
  t_list	*tmp;
  t_intl	*tmp2;
  char		put;

  tmp = glob->list;
  while (tmp)
    {
      tmp2 = tmp->line_final;
      if (tmp2 != NULL)
	{
	  while (tmp2)
	    {
	      put = (char) tmp2->nb;
	      if (write(fd, &put, 1) == -1)
		my_errex("asm: Error on write\n");
	      tmp2 = tmp2->next;
	    }
	}
      tmp = tmp->next;
    }
}

void		aff_list(t_glob *glob)
{
  int		rights;
  int		fd;
  int		type;

  gere_filename(glob);
  rights = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH | S_IWOTH;
  type = O_CREAT | O_RDWR | O_TRUNC;
  fd = open(glob->new_file, type, rights);
  if (fd != -1)
    {
      stock_header(glob, fd);
      stock(glob, fd);
    }
  else
    my_errex("asm: File not created\n");
}
