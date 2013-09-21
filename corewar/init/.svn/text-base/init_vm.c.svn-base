/*
** init_vm.c for init_func in /home/dell-a_f/corewar-2016-knocka_a
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:53:26 2012 florian dell'aiera
** Last update Sun Mar 25 18:47:49 2012 antoine knockaert
*/

#include	"../vm.h"

void		init_func(t_glob *glob)
{
  glob->ptr_func = xmalloc(20 * sizeof(void *));
  glob->ptr_func[0] = NULL;
  glob->ptr_func[1] = &(live);
  glob->ptr_func[2] = NULL;
  glob->ptr_func[3] = NULL;
  glob->ptr_func[4] = NULL;
  glob->ptr_func[5] = NULL;
  glob->ptr_func[6] = NULL;
  glob->ptr_func[7] = NULL;
  glob->ptr_func[8] = NULL;
  glob->ptr_func[9] = &(zjump);
  glob->ptr_func[10] = NULL;
  glob->ptr_func[11] = NULL;
  glob->ptr_func[12] = NULL;
  glob->ptr_func[13] = NULL;
  glob->ptr_func[14] = NULL;
  glob->ptr_func[15] = NULL;
  glob->ptr_func[16] = NULL;
  glob->ptr_func[17] = NULL;
}

void		init_vm(t_glob *glob)
{
  glob->cycles = 0;
  glob->mem = xmalloc(MEM_SIZE);
  init_str(glob->mem, MEM_SIZE);
  glob->cycle_to_die = CYCLE_TO_DIE;
  glob->nbr_live = NBR_LIVE;
  glob->dies = 0;
  init_func(glob);
}
