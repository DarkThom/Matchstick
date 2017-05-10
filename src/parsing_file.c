/*
** parsing_file.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 14:40:21 2017 Thomas BLENEAU
** Last update Tue Feb 14 17:02:54 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	*parsing_file(char **av)
{
  int	i;
  int	size;
  int	*tab;

  i = 2;
  size = 1;
  if ((tab = malloc(sizeof(int) * (str_nbr(av[1]) + 2))) == NULL)
    return (0);
  tab[0] = str_nbr(av[1]);
  tab[1] = str_nbr(av[2]);
  while (i <= (str_nbr(av[1]) + 1))
    {
      tab[i++] = size;
      size = size + 2;
    }
  return (tab);
}
