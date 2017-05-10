/*
** swap.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:48:48 2017 Thomas BLENEAU
** Last update Sat Feb 11 18:50:08 2017 Thomas BLENEAU
*/

#include "my.h"

void	swap_char(char *a, char *b)
{
  char	c;

  c = *a;
  *a = *b;
  *b = c;
}

void	swap_int(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
