/*
** put_nbr.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 17:50:14 2017 Thomas BLENEAU
** Last update Mon Feb 13 14:45:35 2017 Thomas BLENEAU
*/

#include "my.h"

int	divider(int nbr)
{
  int	div;

  div = 1;
  while (nbr > 9)
    {
      div = div * 10;
      nbr = nbr / 10;
    }
  return (div);
}

void	put_nbr(int nbr)
{
  int	div;
  char	result;

  nbr = nbr_sign(nbr);
  div = divider(nbr);
  while (div != 0)
    {
      result = (nbr / div) + 48;
      write(1, &result, 1);
      nbr = nbr % div;
      div = div / 10;
    }
}
