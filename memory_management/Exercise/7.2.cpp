#include <cstdlib>
#include <iostream>
#include <memory>
int main(){
  const size_t numberOfElements { 10 };
  //int* values { new int[numberOfElements] };
  std::unique_ptr<int[]> values {std::make_unique<int[]>(numberOfElements)};
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
  // Wrong is: Just allocate 10 (from 0 -> 9), but using values
}