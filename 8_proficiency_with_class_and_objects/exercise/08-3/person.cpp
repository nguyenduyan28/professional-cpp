#include "person.hpp"

Person::Person(const std::string& first_name, const std::string& last_name): first_name{first_name}, last_name{last_name}{}

const std::string& Person::getFirstName() const{
  return this -> first_name;
}

const std::string& Person::getLastName() const{
  return this -> last_name;
}

Person::Person(const Person& another_person) : first_name{another_person.first_name}, last_name{another_person.last_name}{}

Person& Person::operator=(const Person& rhs){
  this -> first_name = rhs.first_name;
  this -> last_name = rhs.last_name;
  return *this;
}

Person::~Person(){
  this -> first_name.clear();
  this -> last_name.clear();
}