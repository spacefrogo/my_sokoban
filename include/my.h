/*
** EPITECH PROJECT, 2018
** header
** File description:
** bre
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <ncurses.h>

int	return_player(char *);
int	return_box(char *);
int	return_wall(char *);
void    moving(char **, int, int, int);
int     find_player_column(char *);
int     find_player_row(char *);
void	info(void);
int	print_window(char *);
char	**replace(char *);
int	nb_columns(char *);
int	nb_rows(char *);
int     my_getnbr(char *);
int     fs_open_file(char const *);
void 	my_putchar(char);
int     my_strlen(char *);
int	my_printf(char*, ...);
int	my_put_nbr_base(int, char *);
int	my_putstr(char const *);
char    *my_strdup(char *);
int     count_chars(char const *);
char	**string_to_word_array(char const *);
void	my_show_word_array(char **);

#endif // _MY_H_
