/*
** strcopy.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:37:24 2017 Thomas BLENEAU
** Last update Sat Feb 11 18:38:43 2017 Thomas BLENEAU
*/

#include "my.h"

char	*str_ncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src && src[i] && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}

char	*str_cpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src && src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
