/*
** str_to_wordtab.c for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:27:30 2017 Thomas BLENEAU
** Last update Mon Feb 13 14:51:58 2017 Thomas BLENEAU
*/

#include "my.h"
#include "str_to_wordtab.h"

int		nbr_words(char *str, char separator)
{
  int		k;
  int		word;

  k = 0;
  word = 0;
  while (str[k] != '\0')
    {
      while (str[k] == separator && str[k] != '\0')
	k = k + 1;
      if (str[k] != '\0')
	word = word + 1;
      while (str[k] != separator && str[k] != '\0')
	k = k + 1;
    }
  return (word);
}

char		**str_to_wordtab(char *str, char separator)
{
  char		**tab;
  t_parse	inc;

  inc.i = 0;
  inc.j = 0;
  inc.k = 0;
  inc.word = nbr_words(str, separator);
  if (((tab = malloc(sizeof(char *) * (inc.word + 1))) == NULL)
      || (str == NULL))
    return (NULL);
  while (inc.k < inc.word)
    {
      inc.j = 0;
      if ((tab[inc.k] = malloc(sizeof(char) * (str_len(str) + 1))) == NULL)
	return (NULL);
      while (str[inc.i] == separator && str[inc.i] != '\0')
	inc.i = inc.i + 1;
      while (str[inc.i] != separator && str[inc.i] != '\0')
	tab[inc.k][inc.j++] = str[inc.i++];
      tab[inc.k][inc.j] = '\0';
      inc.k = inc.k + 1;
    }
  tab[inc.k] = NULL;
  return (tab);
}
