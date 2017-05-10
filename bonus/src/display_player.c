/*
** display_player.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 18:44:12 2017 Thomas BLENEAU
** Last update Wed Feb 15 18:46:35 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

void	display_player(char *line, char *matches, int k)
{
  if (k == 0)
    write(1, "\nPlayer_1 removed ", 18);
  else if (k == 1)
    write(1, "Player_2 removed ", 17);
  else if (k == 2)
    write(1, "Player removed ", 15);
  write(1, matches, str_len(matches));
  write(1, " match(es) from line ", 21);
  write(1, line, str_len(line));
  write(1, "\n", 1);
}
