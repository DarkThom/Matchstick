/*
** help_command.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 10:02:59 2017 Thomas BLENEAU
** Last update Wed Feb 15 21:57:51 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

void	game_description()
{
  write(1, "\t\tThe objective of this game isn't", 34);
  write(1, " to pull out the last matches.\n", 31);
  write(1, "\t\tEach players can remove a definite", 36);
  write(1, " number of matches.\n", 20);
  write(1, "\t\tThe winner is the player who doesn't", 38);
  write(1, " withdraw the last matche.\n", 27);
  write(1, "\t\tThe loser isn't player who does pull", 38);
  write(1, " out the last matche.\n\n", 23);
}

void	help_command()
{
  write(1, "USAGE\n", 6);
  write(1, "\t\t./matchstick\n", 17);
  write(1, "DESCRIPTION\n", 13);
  game_description();
  write(1, "\t\toption\t1 - Human vs Human\n", 28);
  write(1, "\t\toption\t2 - IA vs Human\n", 25);
  write(1, "\t\toption\t3 - IA vs IA\n\n", 23);
}
