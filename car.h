/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

typedef struct CarImplementation* Car;

enum CarType { AIXAM, FIAT_MULTIPLA, JEEP};
enum Color { RED, GREEN, BLUE, ORANGE, SILVER, BLACK};

void init();
bool start(Car car);
void accelerate(Car car);
void brake(Car car);
int get_speed(Car car);
float get_filling_level(Car car);
void fill(Car car, float fuel_amount);
void stop(Car car);
Car get_car(enum Cartype type);

#endif
