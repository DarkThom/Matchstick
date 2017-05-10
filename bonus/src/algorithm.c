/*
** algorithm.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 10:01:46 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:22:23 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	choice_option()
{
  char	*str;

  write(1, "Choice of option: ", 18);
  while (check_opts(str = get_next_line(0)))
    {
      if (str == NULL)
	return (1);
      write(1, "Error: Bad option\n", 18);
      free(str);
      write(1, "Choice of option: ", 18);
    }
  return (str_nbr(str));
}

int	choice_line()
{
  char	*str;

  write(1, "Number of Line(s): ", 19);
  while (check_opts_2(str = get_next_line(0)))
    {
      if (str == NULL)
	return (1);
      free(str);
      write(1, "Number of Line(s): ", 19);
    }
  return (str_nbr(str));
}

int	choice_matches()
{
  char	*str;

  write(1, "Number of Matche(s): ", 21);
  while (check_opts_3(str = get_next_line(0)))
    {
      if (str == NULL)
	return (1);
      free(str);
      write(1, "Number of Matche(s): ", 21);
    }
  return (str_nbr(str));
}

int	algorithm()
{
  int	line;
  int	opts;
  int	matches;

  opts = choice_option();
  line = choice_line();
  matches = choice_matches();
  write(1, "\n", 1);
  if (opts == 1)
    option_1(line, matches);
  else if (opts == 2)
    option_2(line, matches);
  else if (opts == 3)
    option_3(line, matches);
  return (0);
}
