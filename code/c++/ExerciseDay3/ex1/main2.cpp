#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h">

int main(int argc, char **argv) {
  Circle s1(2.0, "red");
  ColoredShape *s2 = new Rectangle(1.0, 2.0, "blue");
  ColoredShape *s3 = new Rectangle(3.0,2.0, "green");
  //ColoredShape *s4 = new Triangle(3.0,2.0,"red");

  s1.printArea(std::cout);
  s2->printArea(std::cout);
  s3->printArea(std::cout);
  //s4->printArea(std::cout);

  delete s2;
  delete s3;
  //delete s4;
  return 0;
}


