/*
** display_tab.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:33:39 2017 Thomas BLENEAU
** Last update Mon Feb 13 15:17:11 2017 Thomas BLENEAU
*/

#include "my.h"

void	display_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab && tab[++i] != NULL)
    {
      write(1, tab[i], str_len(tab[i]));
      write(1, "\n", 1);
    }
}
