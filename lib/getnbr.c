/*
** getnbr.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:03:42 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:04:22 2017 Thomas BLENEAU
*/

#include "my.h"

int	char_nbr(char c)
{
  int	nbr;
  int	sign;

  nbr = 0;
  sign = char_sign(c);
  if (c != '\0' && (c >= '0' && c <= '9'))
    {
      if (nbr * 10 + c - 48 < 0 || nbr * 10 + c - 48 >= 2147483647)
	return (0);
      nbr = nbr * 10 + c - 48;
    }
  if ((sign % 2) == 1)
    return (nbr * -1);
  return (nbr);
}

int	str_nbr(char *str)
{
  int	i;
  int	nbr;
  int	sign;

  i = 0;
  nbr = 0;
  if (str == NULL)
    return (0);
  sign = str_sign(str);
  while (str && str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	nbr = nbr * 10 + str[i] - 48;
      i = i + 1;
    }
  if ((sign % 2) == 1)
    return (nbr * -1);
  return (nbr);
}
