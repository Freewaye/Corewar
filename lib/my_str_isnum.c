/*
** my_str_isnum.c for my_str_isnum in /home/dell-a_f
** 
** Made by florian dell-aiera
** Login   <dell-a_f@epitech.net>
** 
** Started on  Tue Oct 11 18:37:36 2011 florian dell-aiera
** Last update Sun Mar 25 19:09:37 2012 antoine knockaert
*/

int	my_str_isnum(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      if (str[count] < '0' || str[count] > '9')
	return (0);
      count++;
    }
  return (1);
}
