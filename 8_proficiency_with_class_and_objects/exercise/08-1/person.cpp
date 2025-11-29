#include "person.hpp"

Person::Person(const std::string& first_name, const std::string& last_name): first_name{first_name}, last_name{last_name}{}

const std::string& Person::getFirstName() const{
  return this -> first_name;
}

const std::string& Person::getLastName() const{
  return this -> last_name;
}