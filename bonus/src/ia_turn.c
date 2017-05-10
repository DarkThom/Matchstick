/*
** IA_turn.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Feb 17 13:38:24 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:46:41 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	ia_turn_1(int *tab)
{
  int	line;
  int	matches;

  line = 0;
  matches = 0;
  while (check_nbr(tab, line, matches))
    {
      line = rand() % (tab[0] + 1);
      if (tab[line + 1] != 0)
	matches = rand() % (tab[line + 1] + 1);
    }
  tab[line + 1] = tab[line + 1] - matches;
  display_robot_turn(line, matches, 0);
  display_game(tab);
  return (0);
}
