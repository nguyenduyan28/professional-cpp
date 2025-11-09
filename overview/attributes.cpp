#include <cstdlib>
#include <iostream>
/*
[[nodiscard]]: Warn if the function does not do anything with return value
[[maybe_unused]]: Add for some variable maynot be unused, and compiler will not warning that
[[noreturn]]: Never returns to call site. Use for termination
[[deprecated]]: Warn that this method is not recommend to be used anymore 
*/

[[noreturn]] void termination(){
  std::exit(1);
}

[[nodiscard]] int func(){
  return 69;
}

[[deprecated("This is shitty function, please using another")]]void shit(){
  std::cout << "Dumbass";
}


int func2(int param1, [[maybe_unused]] int param2){
  return 3;
}

int main(){
  // std::cout << func();
  // std::cout << func2(4, 3);
  shit();
}
