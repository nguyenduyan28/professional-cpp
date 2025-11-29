#include <charconv>
#include <string_view>
#include <system_error>
#include <iostream>

int main(){
  std::string_view sv {"123456"};
  int value;
  auto [ptr, ec] = std::from_chars(sv.data(), sv.size() + sv.data(), value);
  if (ec == std::errc()){
    if (ptr == sv.data() + sv.size()){
      std::cout << "Conversion success " << value << '\n';
    }
    else {
      std::cout << "Entire string not an integer." << '\n';
    }
  }
  else{
    std::cout << "Error during conversion." << '\n';
  }
}