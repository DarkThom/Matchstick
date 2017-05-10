/*
** strrchr.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:53:39 2017 Thomas BLENEAU
** Last update Mon Feb 13 14:50:02 2017 Thomas BLENEAU
*/

#include "my.h"

char	*str_rchr(char *str, char r)
{
  int	i;
  char	*copy;

  i = 0;
  if (r == '\0')
    return (str);
  while (str && str[i] != '\0')
    {
      if (str[i] == r)
	copy = str + (i + 1);
      i = i + 1;
    }
  return (copy);
}
