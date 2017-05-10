/*
** str_cat.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:40:32 2017 Thomas BLENEAU
** Last update Sat Feb 11 18:46:16 2017 Thomas BLENEAU
*/

#include "my.h"

char	*str_cat(char *src, char *dest)
{
  int	i;
  int	size;
  char  *str;

  i = 0;
  size = str_len(src);
  if ((str = malloc(sizeof(char) * (size + str_len(dest) + 2))) == NULL)
    return (NULL);
  while (src && *src != '\0')
    {
      str[i] = *src;
      i = i + 1;
      src = src + 1;
    }
  while (dest && *dest != '\0')
    {
      str[i] = *dest;
      i = i + 1;
      dest = dest + 1;
    }
  str[i] = '\0';
  return (str);
}
