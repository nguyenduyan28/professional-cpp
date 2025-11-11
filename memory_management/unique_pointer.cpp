#include <memory>
#include <iostream>


int * my_alloc(int value){
  std::cout << "Hi, custom created\n";
  return new int {value};
}

void my_free(int * p){
  std::cout << "Hi, custom deleted\n";
  delete p;
}

void print_pointer(int * p){

}

int main(){
  //array C with unique_ptr
  auto arr {std::make_unique<int[]>(10)}; // type of arr is unique_ptr
  for (int i = 0; i < 10; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << '\n';

  std::unique_ptr<int> simple_int = std::make_unique<int> (3);
  std::cout << *simple_int << '\n';
  print_pointer(simple_int.get()); // extract from unique_ptr to raw ptr

  simple_int.reset(); // free resource and set it to nullptr
  simple_int.reset(new int{4}); // free resource and set it to new simple instance
  std::cout << *simple_int << '\n';

  // release ownership
  int * released_var{simple_int.release()};
  std::cout << *released_var << '\n';
  delete released_var;
  released_var = nullptr;

  //custom deleter
  std::unique_ptr<int, decltype(&my_free)> custom_allocate {my_alloc(432), my_free};
}