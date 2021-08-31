/*
** EPITECH PROJECT, 2021
** B-PSU-101-PAR-1-3-minishell1-brice.boualavong
** File description:
** my_str_to_word_array
*/

#include "ia.h"

int counting_word(const char *str, char separator)
{
    int nbr = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator)
            nbr++;
    }
    return nbr;
}

int length(const char *str, int word, char separator)
{
    int count = 0;
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator)
            count++;
        if (count == word)
            length++;
    }
    return length;
}

char **my_str_to_word_array(char const *str, char separator)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int words = counting_word(str, separator);
    char **tab = malloc(sizeof(char *) * (words + 1));

    for (; i < words; i++) {
        tab[i] = malloc(sizeof(char) * (length(str, i, separator) + 1));
        for (;str[k] != '\0' && str[k] != separator; j++, k++)
            tab[i][j] = str[k];
        k++;
        tab[i][j] = '\0';
        j = 0;
    }
    tab[i] = NULL;
    return tab;
}