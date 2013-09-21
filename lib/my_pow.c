/*
** my_pow.c for pow in /home/knocka_a/corewar-2016-knocka_a/lib
** 
** Made by antoine knockaert
** Login   <knocka_a@epitech.net>
** 
** Started on  Sun Mar 25 19:03:08 2012 antoine knockaert
** Last update Sun Mar 25 19:03:37 2012 antoine knockaert
*/

int	my_pow(int nb, int pow)
{
  int	p;
  int	result;

  p = 1;
  result = 1;
  if (pow < 0)
    return (0);
  if (pow == 0)
    return (1);
  while (p <= pow)
    {
      result = result * nb;
      p = p + 1;
    }
  return (result);
}
