#include "person.hpp"
#include <format>

Person::Person(const std::string& first_name, const std::string& last_name): Person{first_name, last_name, std::format("{}{}", first_name[0], last_name[0])}{} // this will init 3rd arg first then execute body constructor

const std::string& Person::getFirstName() const{
  return this -> first_name;
}

const std::string& Person::getLastName() const{
  return this -> last_name;
}

Person::Person(const std::string &first_name, const std::string &last_name, const std::string &initials) : first_name{first_name}, last_name{last_name}, initials{initials}{}
const std::string& Person::getInitials() const{
  return this -> initials;
}