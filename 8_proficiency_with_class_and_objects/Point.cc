#include "Point.hpp"

Point::Point(int x, int y, int &b) : x{x}, y{y}{}
/* 
  by the time you create an object, the data member also initialize, so if we do this 
  Point::Point(int x, int y) {
    this -> x = x;
    this -> y = y;
  } 
  We only modify a variable with value, not initialize it, by initialize with constructor above, we set value during object creating.
  Some data member must be create at object initilization 
  1. const data member: Once it create and init, we cannot change it -> Must define in creation time.
  2. Reference data member: It cannot create with out assigning to some variable.
  2. Object data member for which there is no default constructor: C++ will attempt to initilize member object using default constructor, if it does not have default constructor -> Must init in ctor-init phase.
  3. Base classes without default constructors
*/ 


Point::Point(const Point &value) : x{value.x}, y{value.y}{}
