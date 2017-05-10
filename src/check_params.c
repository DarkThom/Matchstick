/*
** check_params.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 14:53:00 2017 Thomas BLENEAU
** Last update Thu Feb 23 17:14:15 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	check_params(int ac, char **av)
{
  if (ac != 3)
    return (1);
  else if (str_isnum(av[1]) || str_isnum(av[2]))
    return (1);
  else if (str_nbr(av[1]) < 1 || str_nbr(av[1]) > 100)
    return (1);
  else if (str_nbr(av[2]) < 1)
    return (1);
  return (0);
}
