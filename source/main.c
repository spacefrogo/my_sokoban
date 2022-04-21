/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** project
*/

#include "my.h"

int     check_map(char *str);

int     if_existing(char *str)
{
    int fd = 0;

    if ((fd = open(str, O_RDONLY)) == -1) {
        my_putstr("Sorry: ");
        my_putstr(str);
        my_putstr(": No such file or directory\n");
        exit(84);
    }
    return (fd);
}

char	*open_file(char *filepath)
{
    unsigned	int	fd = 0;
    struct stat st;
    char *buffer = NULL;
    unsigned	int	size = 0;

    stat(filepath, &st);
    size = st.st_size + 1;
    buffer = malloc(size);
    if ((fd = if_existing(filepath)) != 84)
        read(fd, buffer, size);
    return (buffer);
    free(buffer);
    close(fd);
}

char	**get_array(char *filepath)
{
    char **array;
    char *str;

    str = open_file(filepath);
    array = string_to_word_array(str);
    return (array);
}

int	print_window(char *map)
{
    char **str = get_array(map);
    int y = find_player_row(map);
    int x = find_player_column(map);
    int ch;

    initscr();
    curs_set(0);
    keypad(stdscr, true);
    for (int i = 0; str[i]; i++) {
        printw("%s\n", str[i]);
    }
    moving(str, ch, y, x);
    refresh();
    endwin();
    return (0);
}

int	main(int ac, char **av)
{
    if (ac != 2 || av[1] == NULL)
        return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        info();
        return (0);
    }
    if (check_map(av[1]) == 84)
        exit(84);
    else {
        print_window(av[1]);
        return (0);
    }
}
