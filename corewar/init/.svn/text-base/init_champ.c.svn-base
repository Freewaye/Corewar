/*
** init_champ.c for init_champ in /home/dell-a_f/corewar-2016-knocka_a
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:53:17 2012 florian dell'aiera
** Last update Sun Mar 25 18:47:24 2012 antoine knockaert
*/

#include	"../vm.h"

static	void	copy_program(t_champ *pt)
{
  int		check;

  check = read(pt->fd, &pt->header, sizeof(header_t));
  if (check == -1)
    {
      my_putstr("vm-error: error read \n");
      exit(EXIT_FAILURE);
    }
  pt->header.prog_size = convert_int(pt->header.prog_size);
  pt->header.magic = convert_int(pt->header.magic);
  pt->data = xmalloc((pt->header.prog_size + 10) * sizeof(char));
  check = read(pt->fd, pt->data, pt->header.prog_size);
  if (check == -1)
    {
      my_putstr("vm-error: error read \n");
      exit(EXIT_FAILURE);
    }
}

static	int	find_space(t_glob *glob)
{
  int		i;
  int		total;
  t_champ	*pt;

  i = 0;
  total = 0;
  while (glob->champ[i])
    {
      pt = glob->champ[i];
      total += pt->header.prog_size;
      i++;
    }
  total = MEM_SIZE - total;
  total = total / i;
  return (total);
}

static	void	copy_prog_mem(t_glob *glob)
{
  int		i;
  int		j;
  int		k;
  int		end;
  t_champ	*pt;

  i = 0;
  while (glob->champ[i])
    {
      k = 0;
      pt = glob->champ[i];
      j = pt->begin;
      end = j + pt->header.prog_size + 1;
      while (j < end)
	{
	  j = j % MEM_SIZE;
	  if (k > pt->header.prog_size)
	    my_errex("vm-error: Error while copying.");
	  glob->mem[j++] = pt->data[k++];
	}
      i++;
    }
}

static	void	final_init_champ(t_glob *glob)
{
  int		i;
  int		j;
  t_champ	*pt;

  i = 0;
  while (glob->champ[i])
    {
      j = 0;
      pt = glob->champ[i];
      if (pt->header.magic != COREWAR_EXEC_MAGIC)
	my_errex("vm-error: Invalid exec magic found in champion\n");
      pt->pc = pt->begin;
      pt->carry = 0;
      pt->alive = 1;
      pt->cycle_live = 0;
      pt->cycle_next_ins = 0;
      while (j < REG_NUMBER)
	pt->reg[j++] = 0;
      pt->reg[0] = pt->champ_nb;
      i++;
    }
}

void		init_champ(t_glob *glob)
{
  int		i;
  int		space;
  int		beg;
  t_champ	*pt;

  i = 0;
  beg = 0;
  while (glob->champ[i])
    copy_program(glob->champ[i++]);
  space = find_space(glob);
  i = 0;
  while (glob->champ[i])
    {
      pt = glob->champ[i];
      pt->begin = beg;
      beg += pt->header.prog_size;
      beg += space;
      i++;
    }
  copy_prog_mem(glob);
  final_init_champ(glob);
}
