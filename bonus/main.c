/*
** main.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 10:12:34 2017 Thomas BLENEAU
** Last update Wed Feb 15 18:53:40 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	main(int ac, UNUSED char **av)
{
  int	res;

  if (check_params(ac))
    {
      write(1, "Usage: ./matchstick\n", 21);
      return (84);
    }
  help_command();
  res = algorithm();
  return (res);
}
