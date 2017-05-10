##
## Makefile for  in /home/BLENEA_T/Projects/Semestre_2/CPE/CPE_2016_matchstick
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Feb 13 12:37:08 2017 Thomas BLENEAU
## Last update Wed May 10 10:23:34 2017 Thomas BLENEAU
##

RM		= rm -f

AR		= ar crs

CC		= gcc

CFLAGS		+= -W -Wall -Wextra
CFLAGS		+= -I ./include/

LDFLAGS		+= -L. -lmy

NAME_LIB	= libmy.a

NAME		= matchstick

SRCS_LIB	= ./lib/check_sign.c \
		  ./lib/display_tab.c \
		  ./lib/free.c \
		  ./lib/getnbr.c \
		  ./lib/get_next_line.c \
		  ./lib/len.c \
		  ./lib/put_nbr.c \
		  ./lib/str_cat.c \
		  ./lib/strcmp.c \
		  ./lib/strcopy.c \
		  ./lib/strdup.c \
		  ./lib/str_isnum.c \
		  ./lib/strrchr.c \
		  ./lib/str_to_wordtab.c \
		  ./lib/swap.c \

SRCS		= main.c \
		  ./src/algorithm.c \
		  ./src/check_nbr.c \
		  ./src/check_params.c \
		  ./src/check_str.c \
		  ./src/check_victory.c \
		  ./src/display_game.c \
		  ./src/display_turn.c \
		  ./src/game_tab.c \
		  ./src/parsing_file.c \
		  ./src/player_turn.c \
		  ./src/robot_turn.c \
		  ./src/robot_xor.c \

OBJS_LIB	= $(SRCS_LIB:.c=.o)

OBJS		= $(SRCS:.c=.o)

$(NAME):	$(OBJS_LIB) $(OBJS)
		$(AR) $(NAME_LIB) $(OBJS_LIB)
		$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all:		$(NAME)

clean:
		$(RM) $(OBJS)
		$(RM) $(OBJS_LIB) 

fclean:		clean
		$(RM) $(NAME)
		$(RM) $(NAME_LIB)

re:		fclean all

.PHONY:		all clean fclean re
