#include "person.hpp"
#include <iostream>
#include <format> // c++20
#include <memory>

using namespace std;

int main()
{
	// On the stack:
	Person person1{ "John", "Doe" };
	cout << format("{} {}", person1.getFirstName(), person1.getLastName()) << endl;

	// On the free store:
	auto person2{ make_unique<Person>("Marc", "Gregoire") };
	cout << format("{} {}", person2->getFirstName(), person2->getLastName()) << endl;
	Person phoneBook[3];
}
