/*
** option_2.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 11:10:14 2017 Thomas BLENEAU
** Last update Mon May  8 19:45:05 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	option_2(int line, int matches)
{
  int	*tab;
  int	sign;
  int	boolean;

  tab = parsing_file(line, matches);
  display_game(tab);
  while ((boolean = 1) == 1)
    {
      write(1, "Your turn:\nLine: ", 17);
      if (player_turn(tab, 2))
	{
	  free(tab);
	  return (1);
	}
      sign = 0;
      if (check_IA_victory(tab, sign))
	break ;
      sign = 1;
      robot_xor(tab, 1);
      if (check_IA_victory(tab, sign))
	break ;
    }
  return (0);
}
