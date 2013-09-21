/*
** put_nbr_in_str.c for printf in /home/knocka_a/rendu/my_printf/func
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Thu Nov 17 09:43:48 2011 antoine knockaert
** Last update Fri Feb  3 13:44:27 2012 antoine knockaert
*/

#include	"my.h"

void		my_putnbr(int nb)
{
  unsigned int	div;
  int		nb_to_put;

  div = 1;
  if (nb < 0)
    nb *= -1;
  while (nb / div >= 10)
    div = div * 10;
  while (div > 0)
    {
      nb_to_put = ((int)nb / div % 10 + '0');
      my_putchar(nb_to_put);
      div = div / 10;
    }
}
