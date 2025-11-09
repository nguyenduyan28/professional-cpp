#include <cstddef>
#include "iostream"
#include <iterator>


int main(){
  int arr[3] = {2}; // first is arr[0] = 2, all rest is 0 
  int arr1[3] = {};
  int arr2[]{1, 2, 3, 4};  // auto create element with size 4
  std::size_t {std::size(arr2)};

  std::string_view array_show { R"(
  int arr[3] = {2}; 
  int arr1[3] = {};
  int arr2[]{1, 2, 3, 4};)"
  };
  std::cout << array_show;
}