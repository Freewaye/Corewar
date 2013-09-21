/*
** av_error.c for av_error in /home/dell-a_f/corewar-2016-knocka_a/corewar
** 
** Made by florian dell'aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Sun Mar 25 17:52:46 2012 florian dell'aiera
** Last update Sun Mar 25 19:25:13 2012 antoine knockaert
*/

#include	"../vm.h"

static char	*init_verif(char *verif)
{
  verif[0] = '0';
  verif[1] = '0';
  verif[2] = '0';
  return (verif);
}

static void	check_nb_av(char *str)
{
  if (my_match(str, "-dump") == 1 || my_match(str, "-a") == 1 ||
      my_match(str, "-n") == 1)
    my_errex("Error: Invalid arguments.\n");
}

static void	check_av_nb(char *str, char *str2)
{
  int		i;

  i = my_getnbr(str);
  if (my_match(str2, "-dump") == 1 || my_match(str2, "-a") == 1)
    {
      if (i <= 0)
	my_errex("Error: Please enter a positive number.\n");
      if (my_str_isnum(str) != 1)
	my_errex("Error: Waiting for a number after an option.\n");
    }
  if (my_match(str2, "-n") == 1)
    {
      if (my_str_isnum(str) != 1)
	my_errex("Error: Waiting for a number after -n option.\n");
      if (i < 1 || i > 4)
	my_errex("Error: Please enter a number between 1 and 4.\n");
    }
}

static char	*check_av(char *str, char *verif)
{
  int		l;

  l = my_strlen(str);
  if (str[0] == '-')
    {
      if (l > 2 && my_match(str, "-dump") != 1)
	my_errex("Error: Invalid argument.\n");
      else if (l <= 2 && my_match(str, "-n") != 1 && my_match(str, "-a") != 1)
	my_errex("Error: Invalid argument.\n");
      if (my_match(str, "-dump") == 1 && verif[0] == '0')
	verif[0] = '1';
      else if (my_match(str, "-n") == 1 && verif[1] == '0')
	verif[1] = '1';
      else  if (my_match(str, "-a") == 1 && verif[2] == '0')
	verif[2] = '1';
      else
	my_errex("Error: Invalid argument.\n");
    }
  return (verif);
}

void		av_error(int ac, char **av)
{
  int		i;
  char		verif[3];

  i = 1;
  init_verif(verif);
  if (ac < 2)
    my_errex("Usage: [[-dump cycle] [-n number] [-a address]] [champions].\n");
  else
    while (av[i])
      {
	if (av[i][0] == '-')
	  {
	    check_av(av[i], verif);
	    if (av[i + 1] == NULL)
	      check_nb_av(av[i]);
	    if (av[i + 1] != NULL)
	      {
		i++;
		check_av_nb(av[i], av[i - 1]);
	      }
	  }
	else
	  init_verif(verif);
	i++;
      }
}
