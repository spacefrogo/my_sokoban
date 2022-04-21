/*
** EPITECH PROJECT, 2018
** count
** File description:
** project
*/

#include "my.h"

char	*open_file(char *filepath);
int	if_existing(char *str);

int	nb_columns(char *filepath)
{
    int count = 0;
    unsigned    int     fd = 0;
    struct stat st;
    char *buffer = NULL;
    unsigned    int     size = 0;

    stat(filepath, &st);
    size = st.st_size + 1;
    buffer = malloc(size);
    if ((fd = if_existing(filepath)) != 84)
        read(fd, buffer, size);
    free(buffer);
    close(fd);
    for (int i = 0; buffer[i] != '\n'; i++)
        count++;
    return (count);
}

int	nb_rows(char *filepath)
{
    int count = 1;
    int i = 0;
    unsigned    int     fd = 0;
    struct stat st;
    char *buffer = NULL;
    unsigned    int     size = 0;

    stat(filepath, &st);
    size = st.st_size + 1;
    buffer = malloc(size);
    if ((fd = if_existing(filepath)) != 84)
        read(fd, buffer, size);
    while (buffer[i] != '\0') {
        if(buffer[i] == '\n')
            count++;
        i++;
    }
    free(buffer);
    close(fd);
    return (count);
}

int     check_map(char *str)
{
    char *str1 = open_file(str);
    int count = return_player(str1);
    int count1 = return_box(str1);
    int count2 = return_wall(str1);

    if(count == 1 || count1 == 1 || count2 == 1)
        return (0);
    else
        return(84);
}
