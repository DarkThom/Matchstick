/*
** game_tab.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 18:39:31 2017 Thomas BLENEAU
** Last update Thu Feb 23 21:52:31 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	game_tab(int *tab, char *str_line, char *str_matches)
{
  int	x;
  int	y;

  display_player_turn(str_line, str_matches);
  x = str_nbr(str_line);
  y = str_nbr(str_matches);
  tab[x + 1] = tab[x + 1] - y;
  display_game(tab);
  return (0);
}
