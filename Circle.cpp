#include "Circle.h"

Circle::Circle() {
  radius = 1.0;     // unit circle
  center = Point(); // origin
}

Circle::Circle(double radiusParam, Point centerParam) {
  radius = radiusParam;
  center = centerParam;
}

Circle::Circle(double radiusParam, double xParam, double yParam) {
  radius = radiusParam;
  center = Point(xParam, yParam);
}

void Circle::display() {
  cout << "Circle with radius=" << radius << " and center=";
  center.display();
}