/*
** EPITECH PROJECT, 2018
** move
** File description:
** project
*/

#include "my.h"

void    move_left(char **map, int y, int x)
{
    move(y, x);
    printw(" ");
    move(y, x - 1);
    printw("P");
    refresh();
}

void    move_right(char **map, int y, int x)
{
    move(y, x);
    printw(" ");
    move(y, x + 1);
    printw("P");
    refresh();
}

void    move_up(char **map, int y, int x)
{
    move(y, x);
    printw(" ");
    move(y - 1, x);
    printw("P");
    refresh();
}

void    move_down(char **map, int y, int x)
{
    move(y, x);
    printw(" ");
    move(y + 1, x);
    printw("P");
    refresh();
}

void    moving(char **map, int ch, int y, int x)
{
    while(ch = getch()) {
      switch(ch) {
        case KEY_LEFT:
            move_left(map, y, x);
            x--;
            break;
        case KEY_RIGHT:
            move_right(map, y, x);
            x++;
            break;
        case KEY_UP:
            move_up(map, y, x);
            y--;
            break;
        case KEY_DOWN:
            move_down(map, y, x);
            y++;
            break;
        default:
            break;
        }
    }
}
