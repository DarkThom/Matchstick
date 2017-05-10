/*
** my.h for  in /home/BLENEA_T/Projects/lib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Feb 11 18:17:27 2017 Thomas BLENEAU
** Last update Thu Feb 23 16:58:37 2017 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

/*
** Include de la libC
*/

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <sys/resource.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/time.h>
# include <sys/wait.h>
# include <time.h>
# include <ucontext.h>
# include <unistd.h>

/*
** Prototypes des fonctions
*/

char	*str_cat(char *, char *);
char	*str_copy(char *, char *);
char	*str_dup(const char *);
char	*str_ncopy(char *, char *);
char	*str_rchr(char *, char);
char	**str_to_wordtab(char *, char);
int	char_nbr(char);
int	char_sign(char);
int	nbr_sign(int);
int	nbr_words(char *, char);
int	str_cmp(const char *, const char *);
int	str_ncmp(const char *, const char *, int);
int	str_isnum(const char *);
int	str_len(const char *);
int	str_nbr(char *);
int	str_sign(char *);
int	tab_len(const char **);
void	display_tab(char **);
void	free_str(char *);
void	free_tab(char **);
void	free_int_tab(int *);
void	put_nbr(int);
void	swap_char(char *, char *);
void	swap_int(int *, int *);

#endif /* !MY_H_ */
