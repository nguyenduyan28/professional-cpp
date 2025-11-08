#include <array>
#include <iostream>
// Fixed array size, cannot grow at runtime

int main(){
  std::array<int, 3> arr{3, 4}; // arr[2] = 0
  std::cout << "Arr[2] : " << arr[2] << '\n';
  std::cout << "Size of the array is : " << arr.size();
}