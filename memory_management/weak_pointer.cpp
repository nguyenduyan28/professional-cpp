#include <memory>
#include <iostream>

void useResource(std::weak_ptr<int> Weak_simple){
  auto resource{Weak_simple.lock()};
  if (resource){
    std::cout << "Resource is alive: " << *resource;
  }
  else{
    std::cout << "Resource is free";
  }
  std::cout << '\n';
}

int main(){
  std::shared_ptr<int> shared_int {std::make_shared<int>(2)};
  std::shared_ptr<int> shared_second{shared_int};
  std::weak_ptr<int> weak_ptr{shared_int};
  useResource(weak_ptr);
  shared_int.reset();
  useResource(weak_ptr);
  shared_second.reset();
  useResource(weak_ptr);

}