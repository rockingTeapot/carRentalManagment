#include "Person.h"


class Person {
	protected:
		string firstName;
		string lastName;
	public:
		Person(string firstName, string lastName) {
			this->firstName = firstName;
			this->lastName = lastName;
		}
		string getFirstName() {
			return this->firstName;
		}
		string getLastName() {
			return this->lastName;
		}
		string getFullName() {
			return this->firstName+" "+this->lastName;
		}
};