/*
** check_nbr.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Tue Feb 14 16:28:40 2017 Thomas BLENEAU
** Last update Thu Feb 16 19:39:12 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	check_nbr(int *tab, int line, int matches)
{
  if (line < 1 || line > tab[0])
    return (1);
  else if (tab[line + 1] == 0)
    return (1);
  else if (matches < 1 || matches > tab[line + 1])
    return (1);
  else if (matches > tab[1])
    return (1);
  return (0);
}
