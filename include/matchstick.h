/*
** matchstick.h for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 13 14:12:09 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:41:55 2017 Thomas BLENEAU
*/

#ifndef MATCHSTICK_H
# define MATCHSTICK_H

/*
** Prototypes de fonctions
*/

int	algorithm(char **);
int	check_line(int *, char *);
int	check_nbr(int *, int, int);
int	check_params(int, char **);
int	check_matches(int *, char *, char *);
int	check_victory(int *, int);
int	game_tab(int *, char *, char *);
int	*parsing_file(char **);
int	player_turn(int *);
int	print_error(const char const *);
int	robot_turn(int *);
int	robot_xor(int *, int);
void	display_game_start(int *);
void	display_game(int *);
void	display_player_turn(char *, char *);
void	display_robot_turn(int, int, int);

#endif /* !MATCHSTICK_H */
