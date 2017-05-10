/*
** player_turn.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 18:15:00 2017 Thomas BLENEAU
** Last update Thu Feb 23 21:55:06 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	player_turn(int *tab)
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
		return (game_tab(tab, str_line, str_matches));
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
