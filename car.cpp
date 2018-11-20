#include "car.h"

struct CarImplementation
{
  enum CarType type;
  enum Color color;
  float fill_level;
  float accelerate_rate;
  float speed;
};

static CarImplementation aixam1 = {AIXAM, RED, 16, 0, 0};
static CarImplementation fiat1 = {FIAT_MULTIPLA, RED, 65, 0, 0};
static CarImplementation fiat2 = {FIAT_MULTIPLA, BLUE, 65, 0, 0};
static CarImplementation fiat3 = {FIAT_MULTIPLA, ORANGE, 65, 0, 0};
static CarImplementation jeep1 = {JEEP, BLACK, 80, 0, 0};
static CarImplementation jeep1 = {JEEP, SILVER, 80, 0, 0};

bool start(Car car)
{
  return false;
}
void accelerate(Car car)
{

}
void brake(Car car)
{

}
int get_speed(Car car)
{
  return 0;
}
float get_filling_level(Car car)
{
  return 0;
}
void fill(Car car, float fuel_amount)
{

}
void stop(Car car)
{

}
