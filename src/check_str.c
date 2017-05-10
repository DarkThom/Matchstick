/*
** check_str.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 17:55:50 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:05:24 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "matchstick.h"
#include "my.h"

int	check_matches(int *tab, char *str_line,
		      char *str_matches)
{
  if (str_isnum(str_matches) || str_matches[0] == '\0'
	   || str_nbr(str_matches) < 0)
    return (print_error("invalid input (positive number expected)"));
  else if (str_nbr(str_matches) == 0)
    return (print_error("you have to remove at least one match"));
  else if (str_nbr(str_matches) > tab[1])
    {
      write(1, "Error: you cannot remove more than ", 35);
      put_nbr(tab[1]);
      write(1, " matches per turn\n", 18);
      return (1);
    }
  else if ((str_nbr(str_matches) > (tab[str_nbr(str_line) + 1]))
	   || (tab[str_nbr(str_line) + 1] <= 0))
    return (print_error("not enough matches on this line"));
  return (0);
}

int	check_line(int *tab, char *str)
{
  if (str_isnum(str) || str[0] == '\0' || str_nbr(str) < 0)
    return (print_error("invalid input (positive number expected)"));
  else if (str_nbr(str) == 0 || str_nbr(str) > tab[0])
    return (print_error("this line is out of range"));
  write(1, "Matches: ", 9);
  return (0);
}
