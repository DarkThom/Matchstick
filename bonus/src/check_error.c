/*
** check_error.c for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 10:33:51 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:21:05 2017 Thomas BLENEAU
*/

#include "str_to_wordtab.h"
#include "get_next_line.h"
#include "bonus.h"
#include "my.h"

int	check_opts(char *str)
{
  if (str_isnum(str) || str[0] == '\0')
    return (print_error("Bad option"));
  else if (str_nbr(str) != 1 && str_nbr(str) != 2
      && str_nbr(str) != 3)
    return (print_error("Bad option"));
  return (0);
}

int	check_opts_2(char *str)
{
  if (str_isnum(str) || str[0] == '\0' || str_nbr(str) < 0)
    return (print_error("invalid input (positive number expected"));
  else if (str_nbr(str) == 0)
    return (print_error("this line is out of range"));
  return (0);
}

int	check_opts_3(char *str)
{
  if (str_isnum(str) || str[0] == '\0' || str_nbr(str) < 0)
    return (print_error("invalid input (positive number expected"));
  else if (str_nbr(str) == 0)
    return (print_error("you have to remove at least one match"));
  return (0);
}
