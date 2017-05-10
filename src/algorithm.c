/*
** algorithm.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 17:42:34 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:39:17 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	algorithm(char **av)
{
  int	res;
  int	*tab;
  int	sign;
  int	boolean;

  sign = 0;
  tab = parsing_file(av);
  display_game(tab);
  while ((boolean = 1) == 1)
    {
      write(1, "Your turn:\nLine: ", 17);
      if (player_turn(tab))
	{
	  free(tab);
	  return (0);
	}
      sign = 0;
      if ((res = check_victory(tab, sign)) == 2)
	return (res);
      sign = 1;
      robot_turn(tab);
      if ((res = check_victory(tab, sign)) == 1)
	return (res);
    }
  return (0);
}
