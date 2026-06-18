#ifndef VEHICLE_H
#define VEHICLE_H

typedef struct
{
    int speed;
    int rpm;
    int fuel;
    int temperature;
    int gear;

    int odometer;
    float trip;

    int mode;      // 0 = ECO, 1 = NORMAL, 2 = SPORT

} Vehicle;

void updateVehicle(Vehicle *v);

#endif