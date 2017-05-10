/*
** len.c for  in /home/BLENEA_T
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:13:50 2017 Thomas BLENEAU
** Last update Sat Feb 11 18:16:05 2017 Thomas BLENEAU
*/

#include "my.h"

int	str_len(const char *str)
{
  int	var;

  var = -1;
  while (str && str[++var]);
  return (var);
}

int	tab_len(const char **tab)
{
  int	var;

  var = -1;
  while (tab && tab[++var] != NULL);
  return (var);
}
