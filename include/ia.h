/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-bsn4s-thomas.willson
** File description:
** ia
*/

#ifndef IA_H_
#define IA_H_

#include <stdio.h>
#include <sys/types.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

#include "const.h"
#include "struct.h"

int move_car(char **status, char *buffer, size_t sz);
void get_line(char *buffer, size_t sz);
char **my_str_to_word_array(char const *str, char separator);
void car_forward(float m);

#endif /* !IA_H_ */