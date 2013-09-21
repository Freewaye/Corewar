/*
** put_command_in_list.c for corewar in /home/bensaf_g//rendu/corewar-2016-knocka_a/assembleur/src
** 
** Made by ghais bensafia
** Login   <bensaf_g@epitech.net>
** 
** Started on  Sat Mar 24 22:13:52 2012 ghais bensafia
** Last update Sun Mar 25 15:33:10 2012 antoine knockaert
*/

#include	"../asm.h"

static int	count_case_tab(char *str)
{
  int		a;
  int		count;

  a = 0;
  count = 0;
  while (str[a])
    {
      if (str[a] == ' ' || str[a] == SEPARATOR_CHAR || str[a] == '\t')
	count++;
      a++;
    }
  return (count);
}

char		**put_command_in_list(char *s)
{
  int		a;
  int		b;
  int		word;
  char		**cmd;

  a = 0;
  b = 0;
  word = count_case_tab(s);
  cmd = xmalloc(sizeof(char *) * ( word + 5 ));
  word = 0;
  while (s[a])
    {
      while (s[a] && (s[a] == ' ' || s[a] == SEPARATOR_CHAR || s[a] == '\t'))
	a++;
      cmd[b] = xmalloc(sizeof(char) * (my_strlen(s) + 5));
      while (s[a] && (s[a] != ' ' && s[a] != SEPARATOR_CHAR && s[a] != '\t'))
	cmd[b][word++] = s[a++];
      cmd[b][word++] = '\0';
      while (s[a] && (s[a] == ' ' || s[a] == SEPARATOR_CHAR || s[a] == '\t'))
	a++;
      word = 0;
      b++;
    }
  cmd[b] = NULL;
  return (cmd);
}
