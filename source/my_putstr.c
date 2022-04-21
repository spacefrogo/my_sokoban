/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "my.h"

int	my_putstr(char const *str)
{
    int k = 0;

    while (str[k] != '\0') {
        write(1, &str[k], 1);
        k++;
    }
    return (0);
}
