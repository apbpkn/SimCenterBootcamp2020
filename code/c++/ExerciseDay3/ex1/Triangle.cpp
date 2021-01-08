#include "Triangle.h"


Triangle::~Triangle() {
  std::cout << "Triangle Destructor " << this->getColor() << "\n";
}

Triangle::Triangle(double w, double d, string color)
  :ColoredShape(color), width(w), height(d)
{
}

double
Triangle::getArea(void) {
  return 0.5*width*height;
}

void 
Triangle::printArea(std::ostream &s) {
  s << "Triangle: color: " << this->getColor() << ", area: "
    << 0.5*width * height << " numRect: 0 \n";
}

