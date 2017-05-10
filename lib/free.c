/*
** free.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 17:45:38 2017 Thomas BLENEAU
** Last update Thu Feb 23 16:59:10 2017 Thomas BLENEAU
*/

#include "my.h"

void	free_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab != NULL && tab[++i] != NULL)
    free(tab[i]);
  if (tab != NULL)
    free(tab);
}

void	free_str(char *str)
{
  if (str != NULL)
    free(str);
}
