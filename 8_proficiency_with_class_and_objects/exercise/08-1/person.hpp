/*
Implement a Person class storing a first and last name as data members. Add
a single constructor accepting two parameters, the first and last name. Provide appropriate
getters and setters. Write a small main() function to test your implementation by creating a
Person object on the stack and on the free store.
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
    const std::string& getFirstName() const;
    const std::string& getLastName() const;
};
#endif