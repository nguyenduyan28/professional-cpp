#include <cstring>
#include "string"


int main(){
  std::string new_string = "Hello";
  // c_str() -> const char *
  const char * string_convert {new_string.c_str()};
  // never return the result c_str()
  const char * data_convert = new_string.data();
}