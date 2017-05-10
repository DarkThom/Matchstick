/*
** str_isnum.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 17:47:55 2017 Thomas BLENEAU
** Last update Tue Feb 21 13:31:33 2017 Thomas BLENEAU
*/

#include "my.h"

int	str_isnum(const char *str)
{
  int	i;

  i = -1;
  while (str && str[++i] != '\0')
    if ((str[i] < '0' || str[i] > '9')
	&& str[i] != '-' && str[i] != '+')
      return (1);
  return (0);
}
