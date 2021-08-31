/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-bsn4s-thomas.willson
** File description:
** move_car
*/

#include "ia.h"
#define __DIR__(d) (d >= 0 ? 1 : -1)

static void wheels_dir_third(float d, float m)
{
    if (m >= 345)
        dprintf(1, "wheels_dir:%.2f\n", __DIR__(d) * 0.28);
    else if (m >= 250)
        dprintf(1, "wheels_dir:%.2f\n", __DIR__(d) * 0.36);
    else if (m >= 0)
        dprintf(1, "wheels_dir:%.1f\n", __DIR__(d) * 0.4);
}

static void wheels_dir_second(float d, float m)
{
    if (m >= 1050)
        dprintf(1, "wheels_dir:%.1f\n", __DIR__(d) * 0.1);
    else if (m >= 625)
        dprintf(1, "wheels_dir:%.2f\n", __DIR__(d) * 0.18);
    else
        wheels_dir_third(d, m);
}

static void wheels_dir(float d, float m)
{
    if (m >= 1725)
        dprintf(1, "wheels_dir:%.3f\n", __DIR__(d) * 0.005);
    else if (m >= 1350)
        dprintf(1, "wheels_dir:%.2f\n", __DIR__(d) * 0.05);
    else
        wheels_dir_second(d, m);
}

int move_car(char **status, char *buffer, size_t sz)
{
    float right = atof(status[34]);
    float left = atof(status[3]);
    float mid = atof(status[17]);

    car_forward(mid);
    get_line(buffer, sz);
    wheels_dir(left - right, mid);
    get_line(buffer, sz);
    return 0;
}