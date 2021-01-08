#ifndef _RECTANGLE
#define _RECTANGLE

#include "ColoredShape.h"

class Triangle: public ColoredShape {
 public:
  Triangle(double w, double h, string color);
  ~Triangle();
  double getArea(void);
  void printArea(std::ostream &s);  

 protected:

 private:
  double width, height;
  };

#endif // _RECTANGLE

  
