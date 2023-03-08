#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <iostream>

using namespace std;

class Circle {
private:
  double radius;
  Point center; // composition
  // Circle "has-a" Point
public:
  Circle();
  Circle(double, Point);
  Circle(double, double, double);
  // TODO: add copy constructor
  // Circle(const Circle&);
  void display();
  // TODO: add getters and setters
};

#endif