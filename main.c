#include <stdlib.h>
#include "vehicle.h"

void updateVehicle(Vehicle *v)
{
    v->speed = rand() % 161;
    v->rpm = 800 + rand() % 5200;
    v->fuel = rand() % 101;
    v->temperature = 20 + rand() % 90;
    v->gear = (v->speed / 20) + 1;

    if(v->gear > 6)
        v->gear = 6;

    v->trip += 0.5;
    v->odometer += 1;

    if(v->speed < 50)
        v->mode = 0;
    else if(v->speed < 100)
        v->mode = 1;
    else
        v->mode = 2;
}