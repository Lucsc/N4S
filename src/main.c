/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-bsn4s-thomas.willson
** File description:
** main
*/

#include "ia.h"

static int n4s(void)
{
    char **status = NULL;
    char *buffer = NULL;
    size_t sz = 0;
    ssize_t read = 0;

    dprintf(1, "start_simulation\n");
    get_line(buffer, sz);
    dprintf(1, "car_forward:1\n");
    get_line(buffer, sz);
    while (true) {
        buffer = NULL;
        sz = 0;
        dprintf(1, "get_info_lidar\n");
        read = getline(&buffer, &sz, stdin);
        buffer[read] = '\0';
        status = my_str_to_word_array(buffer, ':');
        move_car(status, buffer, sz);
    }
    dprintf(1, "stop_simulation\n");
    return 0;
}

int main(int ac, char const *const av[])
{
    (void)ac;
    (void)av;
    return n4s();
}