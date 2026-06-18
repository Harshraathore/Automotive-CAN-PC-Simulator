#include <stdio.h>
#include <stdlib.h>
#include "dashboard.h"

void DrawBar(int value, int maxValue)
{
    int bars = (value * 20) / maxValue;

    printf("[");

    for(int i = 0; i < 20; i++)
    {
        if(i < bars)
            printf("#");
        else
            printf(" ");
    }

    printf("]");
}

void PrintDashboard(VehicleData car)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    printf("\n");
    printf("=============================================================\n");
    printf("                AUTOMOTIVE CAN DASHBOARD SIMULATOR\n");
    printf("=============================================================\n\n");

    printf("Speed        : %3d km/h\n", car.speed);
    printf("RPM          : %4d\n", car.rpm);
    printf("Fuel         : %3d %%\n", car.fuel);
    printf("Temperature  : %3d C\n", car.temperature);
    printf("Gear         : %d\n\n", car.gear);

    printf("Vehicle Gauges\n");
    printf("-------------------------------------------------------------\n");

    printf("Speed       ");
    DrawBar(car.speed,120);
    printf(" %3d km/h\n",car.speed);

    printf("Fuel        ");
    DrawBar(car.fuel,100);
    printf(" %3d %%\n",car.fuel);

    printf("Temperature ");
    DrawBar(car.temperature,120);
    printf(" %3d C\n\n",car.temperature);

    printf("Vehicle Status\n");
    printf("-------------------------------------------------------------\n");

    if(car.temperature > 100)
        printf("⚠ ENGINE OVERHEAT\n");
    else if(car.fuel < 15)
        printf("⚠ LOW FUEL\n");
    else
        printf("✓ ENGINE NORMAL\n");

    printf("\n=============================================================\n");
}