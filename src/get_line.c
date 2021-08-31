/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-n4s-brice.boualavong
** File description:
** get_line
*/

#include "ia.h"

void get_line(char *buffer, size_t sz)
{
    getline(&buffer, &sz, stdin);
    buffer = NULL;
    sz = 0;
}