#include <initializer_list>
#include <iostream>

// must have same type

int makeSum(std::initializer_list<int> list){
  int sum {};
  for (int c : list){
    sum += c;
  }
  return sum;
}

int main(){
  std::cout << makeSum({1, 2, 3});
}