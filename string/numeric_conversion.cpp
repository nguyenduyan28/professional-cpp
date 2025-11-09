#include <string>
#include <iostream>

int main(){
  // Convert to strings
  long double d {3.14L};
  std::string s{std::to_string(d)};
  std::cout << s;


  // Convert from string
  int stoi(const std::string& str, size_t *idx=0, int base=10);
  long stol(const std::string& str, size_t *idx=0, int base=10);
  unsigned long stoul(const std::string& str, size_t *idx=0, int base=10);
  long long stoll(const std::string& str, size_t *idx=0, int base=10);
  unsigned long long stoull(const std::string& str, size_t *idx=0, int base=10);
  float stof(const std::string& str, size_t *idx=0);
  double stod(const std::string& str, size_t *idx=0);
  long double stold(const std::string& str, size_t *idx=0);
}