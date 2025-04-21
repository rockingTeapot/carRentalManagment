#include "User.h"





class User: public Person {
protected:
	string login;
	string password;
public:
	User(string login, string password, string firstName, string lastName,bool encrypted = false) : Person(firstName, lastName) {
		this->login = login;
		this->password = encrypted ? password : modifiedCaesarEncrypt(password);
	}

	string getLogin() {
		return this->login;
	}
	bool checkLogin(string login, string password) {
		bool loginCheck = (login == this->login);
		bool passwordCheck = (modifiedCaesarEncrypt(password) == this->password);
		// made to protect from time based password attacks
		return loginCheck && passwordCheck;

	}

private:
	char shiftChar(char c) {
		if (c >= 'A' && c <= 'Z') {
			return 'A' + (c - 'A' + 9) % 26; 
		}
		else if (c >= 'a' && c <= 'z') {
			return 'a' + (c - 'a' + 10) % 26; 
		}
		else if (c >= '0' && c <= '9') {
			return '0' + (c - '0' + 5) % 10;
		}
		else {
			return ' ';
		}
	}
	string modifiedCaesarEncrypt(string password){
		string encrypted = "";
		for (char c : password) {
			char e = shiftChar(c);
			if (e != ' ') {
				encrypted += shiftChar(c);
			}
		}
		return encrypted;
	}
};