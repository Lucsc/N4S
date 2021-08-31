/*
** EPITECH PROJECT, 2021
** Delivery
** File description:
** car_forward
*/

#include "ia.h"

static void car_forward_fourth(float m)
{
    if (m >= 0)
        dprintf(1, "car_forward:0.01\n");
    else
        dprintf(1, "car_forward:0.3\n");
}

static void car_forward_third(float m)
{
    if (m >= 375)
        dprintf(1, "car_forward:0.1\n");
    else if (m >= 225)
        dprintf(1, "car_forward:0.04\n");
    else
        car_forward_fourth(m);
}

static void car_forward_bis(float m)
{
    if (m >= 1050)
        dprintf(1, "car_forward:0.5\n");
    else if (m >= 625)
        dprintf(1, "car_forward:0.2\n");
    else
        car_forward_third(m);
}

void car_forward(float m)
{
    if (m >= 1725)
        dprintf(1, "car_forward:1\n");
    else if (m >= 1350)
        dprintf(1, "car_forward:0.7\n");
    else
        car_forward_bis(m);
}