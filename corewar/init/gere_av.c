/*
** gere_av.c for gere_av in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:52:56 2012 florian dell'aiera
** Last update Sun Mar 25 18:53:00 2012 antoine knockaert
*/

#include	"../vm.h"

static void	init_champ_tab(void **tabl, int nb)
{
  int		i;

  i = 0;
  while (i < nb)
    {
      tabl[i] = NULL;
      i++;
    }
}

static void	add_info_champ(t_champ *champ, char *param, char *data)
{
  if (param[1] == 'd')
    champ->dump_cycle = my_getnbr(data);
  else if (param[1] == 'n')
    champ->champ_nb = my_getnbr(data);
  else if (param[1] == 'a')
    champ->champ_nb = my_getnbr(data);
}

/*
** Cette fonction ajoute un champion dans le tableau des champions
** Attention :: Si le nombre vaut -1, c'est qu'il n'a pas été set.
** Vérifier aussi que nb - 1 n'est pas nul.
*/

static void	add_champ_to_tab(t_glob *glob, t_champ *champ)
{
  int		size;

  size = my_tablen((char **) glob->champ);
  if (size < 4 && glob->champ[size] == NULL)
    glob->champ[size] = champ;
  else
    my_errex("vm-error: Too many champions.\n");
}

/*
** Cette fonction prend en paramètres la variable globale glob
** le nombre de champions détectés et les arguments du programme
** 
*/

void		gere_av(t_glob *glob, char **av)
{
  int		i;
  t_champ	*champ;

  i = 1;
  glob->champ = xmalloc((5) * sizeof(void *));
  init_champ_tab(glob->champ, 5);
  champ = xmalloc(sizeof(t_champ));
  champ->champ_nb = -1;
  while (av[i])
    {
      if (av[i][0] != '-')
	{
	  champ->filename = my_strdup(av[i]);
	  add_champ_to_tab(glob, champ);
	  champ = xmalloc(sizeof(t_champ));
	  champ->champ_nb = -1;
	}
      else if (av[i] && av[i + 1])
	{
	  add_info_champ(champ, av[i], av[i + 1]);
	  i++;
	}
      i++;
    }
}
