/*
** robot_xor.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Feb 17 12:36:32 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:36:02 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	nbr_total_matches(int *tab)
{
  int	i;
  int	result;

  i = 1;
  result = 0;
  while (++i < (tab[0] + 2))
    result = result + tab[i];
  return (result);
}

int	simul_game(int *tab, int matches_max)
{
  int	q;
  int	r;

  q = 0;
  while ((matches_max - (q * (tab[1] + 1))) > tab[1])
    q = q + 1;
  r = matches_max - (q * (tab[1] + 1));
  if (r == 0 || r == 1)
    return (tab[1]);
  return (r - 1);
}

int	find_indice_line(int *tab)
{
  int	i;
  int	j;
  int	max;

  i = 1;
  j = 0;
  max = 0;
  while (++i < (tab[0] + 1))
    {
      if (tab[i] > max)
	{
	  max = tab[i];
	  j = i;
	}
    }
  return (j);
}

int	find_line(int *tab, int matches)
{
  int	i;
  int	j;

  i = 2;
  j = 0;
  while (tab[i] < matches)
    {
      j = j + 1;
      i = i + 1;
    }
  return (j);
}

int	robot_xor(int *tab, int k)
{
  int	line;
  int	matches;
  int	indice;
  int	matches_max;

  matches_max = nbr_total_matches(tab);
  indice = find_indice_line(tab);
  matches = simul_game(tab, matches_max);
  line = find_line(tab, matches);
  if (matches > tab[indice])
    {
      matches = 1;
      tab[indice] = tab[indice] - matches;
      if (indice != 0)
	line = indice - 2;
    }
  else
    tab[line + 2] = tab[line + 2] - matches;
  display_robot_turn((line + 1), matches, k);
  display_game(tab);
  return (0);
}
