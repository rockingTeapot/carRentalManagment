#ifndef USER_H
#define USER_H
#include "Person.h"

class User : public Person {
protected:
    std::string login;
    std::string password;

public:
    User(std::string login, std::string password, std::string firstName, std::string lastName, bool encrypted = false);

    std::string getLogin();
    bool checkLogin(std::string login, std::string password);

private:
    char shiftChar(char c);
    std::string modifiedCaesarEncrypt(std::string password);
};
#endif 