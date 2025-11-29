#ifndef POINT_H
#define POINT_H


/*
If don't write any constructor -> Compiler generate default constructor with no arguments
If coder writes any constructor -> Compiler does not generate constructor anymore.
*/

class Point{
  private:
    int x {};
    int y {};
  public:
    Point() = default; // in case you want to default contrustor does nothing and other constructor works as usual.
    //Point() = delete; // If = delete, we will not allow to create a default constructor, it will not be create and we cannot use it. 
    Point(int init_value);
    Point(int x, int y);
    Point(int x, int y, int &b);
    Point(const Point& value);
    Point& operator=(const Point& rhs);
};


#endif