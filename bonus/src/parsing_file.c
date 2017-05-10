/*
** parsing_file.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 11:28:27 2017 Thomas BLENEAU
** Last update Wed Feb 15 19:11:06 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	*parsing_file(int line, int matches)
{
  int   i;
  int   size;
  int   *tab;

  i = 2;
  size = 1;
  if ((tab = malloc(sizeof(int) * (line + 2))) == NULL)
    return (0);
  tab[0] = line;
  tab[1] = matches;
  while (i <= (line + 1))
    {
      tab[i++] = size;
      size = size + 2;
    }
  return (tab);
}
