#include <cstddef>
#include <string>
#include <iostream>

int main(){
  std::string sample{"helle"};
  // get substr
  std::cout << sample.substr(1, 2) << '\n'; // take index 1 ('e') and get 2 characters -> el
  std::string item_to_find{"l"};
  std::string item_not_to_find{"LLO"};

  //find
  std::size_t index {sample.find(item_to_find)};
  std::cout << index << '\n'; // return first position of string that match subtring
  index = sample.find(item_not_to_find);
  std::cout << index << '\n';
  if (index == std::string::npos){
    std::cout << "The index is npos, means that pos does not in string\n";
  }

  //replace
  size_t starting_pos{2};
  size_t len_replace_string{item_not_to_find.size()};
  std::cout << sample.replace(2, len_replace_string, item_not_to_find) << '\n';
}
