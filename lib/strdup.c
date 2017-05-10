/*
** strdup.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:38:49 2017 Thomas BLENEAU
** Last update Mon Feb 13 14:48:14 2017 Thomas BLENEAU
*/

#include "my.h"

char	*str_dup(const char *str)
{
  int	i;
  char	*string;

  i = -1;
  if ((string = malloc(sizeof(char) * (str_len(str) + 1))) == NULL)
    return (NULL);
  while (str && str[++i] != '\0')
    string[i] = str[i];
  string[i] = '\0';
  return (string);
}
