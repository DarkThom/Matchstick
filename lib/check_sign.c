/*
** check_sign.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 17:57:46 2017 Thomas BLENEAU
** Last update Mon Feb 13 20:30:45 2017 Thomas BLENEAU
*/

#include "my.h"

int	nbr_sign(int nbr)
{
  if (nbr < 0)
    {
      write(1, "-", 1);
      nbr = nbr * -1;
    }
  return (nbr);
}

int	char_sign(char c)
{
  int	sign;

  sign = 0;
  if (c != '\0')
    {
      if (c == '-')
	sign = sign + 1;
      else if (c == '+')
	sign = sign - 1;
    }
  return (sign);
}

int	str_sign(char *str)
{
  int	i;
  int	sign;

  i = -1;
  sign = 0;
  while (str && str[++i] != '\0')
    {
      if (str[i] == '-')
	sign = sign + 1;
      else if (str[i] == '+')
	sign = sign - 1;
    }
  return (sign);
}
