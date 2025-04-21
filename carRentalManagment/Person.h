#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person {
protected:
    string firstName;
    string lastName;

public:
    Person(string firstName, string lastName);
    string getFirstName();
    string getLastName();
    string getFullName();
};

#endif