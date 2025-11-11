#include <memory>
#include <iostream>

class ThreeDimension{
private:
  int m_x{}, m_y{}, m_z{};

public:
  ThreeDimension()=default;
  ThreeDimension(int x, int y, int z): m_x(x), m_y(y), m_z(z){};

  friend void printOut(const ThreeDimension &point){
    std::cout << "Coordinate of point is: \n"
    << "X: " << point.m_x << '\n'
    << "Y: " << point.m_y << '\n'
    << "Z: " << point.m_z << '\n';
  }
};


int main(){
  std::unique_ptr<ThreeDimension> point1 {std::make_unique<ThreeDimension>(3, 2, 1)};
  std::cout << point1 << '\n';
  printOut(*point1);
  std::cout << point1 << '\n';

}