/*
** option_3.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 11:12:46 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:36:20 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	option_3(int line, int matches)
{
  int	*tab;
  int	sign;
  int	boolean;

  tab = parsing_file(line, matches);
  display_game(tab);
  while ((boolean = 1) == 1)
    {
      robot_xor(tab, 1);
      sign = 0;
      if (check_robot_victory(tab, sign))
	break ;
      sleep(2);
      sign = 1;
      ia_turn_1(tab);
      if (check_robot_victory(tab, sign))
	break ;
    }
  return (0);
}
