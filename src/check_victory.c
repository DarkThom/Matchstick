/*
** check_victory.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 19:20:13 2017 Thomas BLENEAU
** Last update Wed Feb 22 10:52:46 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	check_victory(int *tab, int sign)
{
  int   i;

  i = 1;
  while (++i < (tab[0] + 2))
    {
      if (tab[i] != 0)
	return (0);
    }
  if (sign % 2 == 1)
    {
      write(1, "I lost... snif... but ", 22);
      write(1, "I'll get you next time!!\n", 25);
      free(tab);
      return (1);
    }
  else
    {
      write(1, "You lost, too bad...\n", 21);
      free(tab);
      return (2);
    }
  return (0);
}
