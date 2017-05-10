/*
** strcmp.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:35:56 2017 Thomas BLENEAU
** Last update Mon Feb 13 14:47:14 2017 Thomas BLENEAU
*/

#include "my.h"

int	str_cmp(const char *s1, const char *s2)
{
  int	i;

  i = 0;
  while (s1 && s2 && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  return (s1[i] - s2[i]);
}

int	str_ncmp(const char *s1, const char *s2, int n)
{
  int	i;

  i = 0;
  while (s1 && s2 && s1[i] != '\0' && s2[i] != '\0' && i < n)
    {
      if (s1[i] == s2[i])
	i = i + 1;
      else
	return (s1[i] - s2[i]);
    }
  return (0);
}
