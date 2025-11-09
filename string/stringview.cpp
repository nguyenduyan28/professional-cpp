#include <string_view>
#include <iostream>

using namespace::std::literals;

std::string_view extract_extension(std::string_view file_name){
  return file_name.substr(file_name.rfind('.'));
}

//Use an std::string_view instead of const string& or const char* whenever a function requires a read-only string as one of its parameters

int main(){
  std::string_view file_name{ "File.txt"};
  std::string_view ext {extract_extension(file_name)};
  std::string ext_string{ext.data()}; // conversion from string_view to string
  std::string_view literals_string {"HI"sv};
}


