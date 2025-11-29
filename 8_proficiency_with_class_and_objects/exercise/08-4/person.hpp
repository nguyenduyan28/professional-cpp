/*
Remove the copy constructor, assignment operator, and destructor from your
Person class, because the default compiler-generated versions are exactly what you need for
this simple class. Next, add a new data member to store the initials of a person, and provide a
getter and setter. Add a new constructor that accepts three parameters, a first and last name,
and a person’s initials. Modify the original two-parameter constructor to automatically gen-
erate initials for a given first and last name, and delegate the actual construction work to the
new three-parameter constructor.
*/

#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
  private:
    std::string first_name{};
    std::string last_name{};
    std::string initials{};
  
  public:
    Person(const std::string &first_name, const std::string &last_name);
    Person()=default;
    Person(const std::string &first_name, const std::string &last_name, const std::string &initials);
    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    const std::string& getInitials() const;
};
#endif