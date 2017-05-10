/*
** display_turn.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 18:09:25 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:35:48 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	print_error(const char *const str)
{
  write(1, "Error: ", 7);
  write(1, str, str_len(str));
  write(1, "\n", 1);
  return (1);
}

void	display_player_turn(char *str_line, char *str_matches)
{
  write(1, "Player removed ", 15);
  write(1, str_matches, str_len(str_matches));
  write(1, " match(es) from line ", 21);
  write(1, str_line, str_len(str_line));
  write(1, "\n", 1);
}

void	display_robot_turn(int line, int matches, int k)
{
  if (k == 0)
    {
      write(1, "AI's turn...\n", 13);
      write(1, "AI removed ", 11);
    }
  else
    {
      write(1, "CHAMPION's turn...\n", 19);
      write(1, "CHAMPION removed ", 17);
    }
  put_nbr(matches);
  write(1, " match(es) from line ", 21);
  put_nbr(line);
  write(1, "\n", 1);
}
