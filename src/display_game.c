/*
** display_game.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 15:24:09 2017 Thomas BLENEAU
** Last update Tue Feb 14 17:06:20 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

void	display_space_front(int size)
{
  int	i;

  i = -1;
  while (++i < size)
    write(1, " ", 1);
}

void	display_space_back(int pipe, int line, int size)
{
  int	i;
  int	max;
  int	space;

  i = -1;
  max = (line * 2);
  space = max - (size + 1) - pipe;
  while (++i < space)
    write(1, " ", 1);
}

void	display_pipe(int line)
{
  int	j;

  j = -1;
  while (++j < line)
    write(1, "|", 1);
}

void	display_line(int line)
{
  int	size;

  size = (line * 2) + 3;
  while (size != 0)
    {
      write(1, "*", 1);
      size = size - 1;
    }
  write(1, "\n", 1);
}

void	display_game(int *tab)
{
  int	i;
  int	size;

  i = 1;
  size = tab[0] - 1;
  display_line(tab[0] - 1);
  while (++i <= (tab[0] + 1))
    {
      write(1, "*", 1);
      display_space_front(size);
      display_pipe(tab[i]);
      display_space_back(tab[i], tab[0], size);
      write(1, "*\n", 2);
      size = size - 1;
    }
  display_line(tab[0] - 1);
  write(1, "\n", 1);
}
