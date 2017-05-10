/*
** main.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 10:42:16 2017 Thomas BLENEAU
** Last update Wed May 10 10:27:17 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	main(int ac, char **av)
{
  int	res;

  if (check_params(ac, av))
    return (84);
  res = algorithm(av);
  if (res != 0)
    return (res);
  return (0);
}
