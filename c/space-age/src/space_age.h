#ifndef SPACE_AGE_H
#define SPACE_AGE_H

typedef enum {
  EARTH,
  MERCURY,
  VENUS,
  MARS,
  JUPITER,
  SATURN,
  URANUS,
  NEPTUNE
} planets;

float convert_planet_age(planets planet, long age);

#endif