/*
** EPITECH PROJECT, 2018
** functions
** File description:
** project
*/

#include "my.h"

char    **get_array(char *filepath);
char    *open_file(char *filepath);

int	find_player_row(char *str)
{
    char **str1 = get_array(str);
    int r = nb_rows(str);
    int c = nb_columns(str);
    int number = 0;

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            if (str1[i][j] == 'P') {
                number = i;
                return (number);
            }
        }
    }
    return (0);
}

int	find_player_column(char *str)
{
    char **str1 = get_array(str);
    int r = nb_rows(str);
    int c = nb_columns(str);
    int number = 0;

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            if (str1[i][j] == 'P') {
                number = j;
                return (number);
            }
        }
    }
    return (0);
}

int	return_player(char *str)
{
    int count = 0;

    for (int v = 0; v < my_strlen(str); v++) {
        if (str[v] == 'P')
            count++;
    }
    if (count > 0)
        return (1);
    else
        return (84);
}

int	return_box(char *str)
{
    int count = 0;

    for (int v = 0; v < my_strlen(str); v++) {
        if (str[v] == 'X')
            count++;
    }
    if (count > 0)
        return (1);
    else
        return (84);
}

int	return_wall(char *str)
{
    int count = 0;

    for (int v = 0; v < my_strlen(str); v++) {
        if (str[v] == '#')
            count++;
    }
    if (count > 0)
        return (1);
    else
        return (84);
}
