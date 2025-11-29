/*
Add the following methods to your Person class implementation: a copy
constructor, an assignment operator, and a destructor. In all of these methods, implement
what you think is necessary, and additionally, output a line of text to the console so you can
trace when they are executed. Modify your main() function to test these new methods. Note:
technically, these new methods are not strictly required for this Person class, because the
compiler-generated versions are good enough, but this exercise is to practice writing them.
*/

#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
  private:
    std::string first_name{};
    std::string last_name{};
  
  public:
    Person(const std::string &first_name, const std::string &class_name);
    Person()=default;
    Person(const Person& another_person);
    Person& operator=(const Person& rhs);
    const std::string& getFirstName() const;
    const std::string& getLastName() const;
};
#endif