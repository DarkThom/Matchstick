/*
** check_victory.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 17:06:07 2017 Thomas BLENEAU
** Last update Thu Feb 23 16:26:52 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	check_player_victory(int *tab, int sign)
{
  int	i;

  i = 1;
  while (++i < (tab[0] + 2))
    {
      if (tab[i] != 0)
	return (0);
    }
  if (sign % 2 == 1)
    write(1, "Player_1 won the game !!\n", 25);
  else
    write(1, "Player_2 won the game !!\n", 25);
  free(tab);
  return (1);
}

int	check_IA_victory(int *tab, int sign)
{
  int	i;

  i = 1;
  while (++i < (tab[0] + 2))
    {
      if (tab[i] != 0)
	return (0);
    }
  if (sign % 2 == 1)
    write(1, "Player won the game !!\n", 23);
  else
    write(1, "AI won the game !!\n", 19);
  free(tab);
  return (1);
}

int	check_robot_victory(int *tab, int sign)
{
  int	i;

  i = 1;
  while (++i < (tab[0] + 2))
    {
      if (tab[i] != 0)
	return (0);
    }
  if (sign % 2 == 1)
    write(1, "CHAMPION won the game !!\n", 25);
  else
    write(1, "AI_2 won the game !!\n", 21);
  free(tab);
  return (1);
}
