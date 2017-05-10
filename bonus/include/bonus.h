/*
** bonus.h for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick/bonus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Wed Feb 15 10:48:48 2017 Thomas BLENEAU
** Last update Fri Feb 24 11:47:10 2017 Thomas BLENEAU
*/

#ifndef BONUS_H
# define BONUS_H

# ifndef UNUSED
#  define UNUSED __attribute__((unused))
# endif /* !UNUSED */

/*
** Prototypes de fonction
*/

int	algorithm();
int	check_line(int *, char *);
int	check_matches(int *, char *, char *);
int	check_nbr(int *, int, int);
int	check_opts(char *);
int	check_opts_2(char *);
int	check_opts_3(char *);
int	check_params(int);
int	check_IA_victory(int *, int);
int	check_player_victory(int *, int);
int	check_robot_victory(int *, int);
int	game_tab(int *, char *, char *, int);
int	ia_turn_1(int *);
int	ia_turn_2(int *);
int	option_1(int, int);
int	option_2(int, int);
int	option_3(int, int);
int	*parsing_file(int, int);
int	player_turn(int *, int);
int	print_error(const char const *);
int	robot_turn(int *);
int	robot_xor(int *, int);
void	display_game(int *);
void	display_player(char *, char *, int);
void	display_robot_turn(int, int, int);
void	help_command();

#endif /* !BONUS_H */
