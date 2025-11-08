#include <iostream>

int main(){
  enum State{Unknown, Started, Finished};
  enum State cur_state = State::Started;
  std::cout << cur_state;
}