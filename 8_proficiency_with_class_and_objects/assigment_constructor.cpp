#include "Point.hpp"

Point& Point::operator=(const Point& rhs){};
/*
The assignment operator returns a reference
The reason is that assignments can be chained, as in the following example:
  myCell = anotherCell = aThirdCell;
When that line is executed, the first thing that happens is the assignment operator for anotherCell is
called with aThirdCell as its “right-hand side” argument. Next, the assignment operator for myCell
is called. However, its argument is not anotherCell; its right-hand side is the result of the assignment
of aThirdCell to anotherCell. The equal sign is actually just shorthand for what is really a method
call. When you look at the line in its full functional syntax shown here, you can see the problem:
  myCell.operator=(anotherCell.operator=(aThirdCell));
Now, you can see that the operator= call from anotherCell must return a value, which is passed to
the operator= call for myCell. The correct value to return is a reference to anotherCell itself, so it
can serve as the source for the assignment to myCell.
*/ 