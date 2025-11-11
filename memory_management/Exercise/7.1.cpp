#include <cstdlib>
#include <iostream>
int main(){
  const size_t numberOfElements { 10 };
  int* values { new int[numberOfElements] };
  // Set values to their index value.
  for (int index { 0 }; index < numberOfElements; ++index) {
    values[index] = index;
  }
  // Set last value to 99.
  values[10] = 99;
  // Print all values.
  for (int index { 0 }; index <= numberOfElements; ++index) {
    std::cout << values[index] << " ";
  }
  // Wrong is: Does not free variable
}