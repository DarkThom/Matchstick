/*
** option_1.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 11:44:16 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:23:16 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	player_turn(int *tab, int k)
{
  char	*str_line;
  char	*str_matches;

  while ((str_line = get_next_line(0)))
    {
      if (check_line(tab, str_line) == 0)
	{
	  while ((str_matches = get_next_line(0)))
	    {
	      if ((check_matches(tab, str_line, str_matches)) == 0)
		return (game_tab(tab, str_line, str_matches, k));
	      free_str(str_line);
	      free_str(str_matches);
	      break ;
	    }
	  if (str_matches == NULL)
	    return (1);
	}
      else
	free_str(str_line);
      write(1, "Line: ", 6);
    }
  return (1);
}

int	option_1(int line, int matches)
{
  int	*tab;
  int	sign;
  int	boolean;

  sign = 0;
  tab = parsing_file(line, matches);
  display_game(tab);
  while ((boolean = 1) == 1)
    {
      write(1, "Player_1 turn:\nLine: ", 21);
      if (player_turn(tab, 0))
	return (1);
      sign = 0;
      if (check_player_victory(tab, sign))
	break ;
      write(1, "Player_2 turn:\nLine: ", 21);
      sign = 1;
      if (player_turn(tab, 1))
	return (1);
      if (check_player_victory(tab, sign))
	break ;
    }
  return (0);
}
