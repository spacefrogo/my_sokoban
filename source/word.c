/*
** EPITECH PROJECT, 2018
** word
** File description:
** word
*/

#include "my.h"

void	*my_memset(char *s, short ch, size_t n)
{
    for (int i = 0; i < n; i++)
        s[i] = ch;
    return (s);
}

int	count_chars(char const *str)
{
    int chars = 0;

    if (!str)
        exit(84);
    for (int i = 0; str[i]; i++)
        chars++;
    return (chars);
}

char	**string_to_word_array(char const *str)
{
    int letters = count_chars(str);
    char **arr = my_memset(malloc(sizeof(char *) * letters), 0, letters);
    int i = 0;

    if (!str)
        exit(84);
    for (int j = 0, word = 0; str[j]; j++, i++, word = 0) {
        arr[i] = malloc(letters * sizeof(char));
        while (str[j] != '\n')
            arr[i][word++] = str[j++];
    }
    arr[i] = 0;
    return (arr);
    free(arr);
}
