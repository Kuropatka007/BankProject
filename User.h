#ifndef USER_H
#define USER_H

#include <iostream>

using namespace std;

class User {
private:
    string id;
    string name;
    string email;
    string phone;
    string userType; // admin, client
    string role;
    string password;
public:

    User();

    User(string id, string name, string email, string phone, string userType, string role);

    string getId();
    string getName();
    string getEmail();
    string getPhone();
    string getUserType();
    string getRole();
    string getPassword();

    void setId(string id);
    void setName(string name);
    void setEmail(string email);
    void setPhone(string phone);
    void setUserType(string userType);
    void setRole(string role);
    void setPassword(string password);
};



#endif //USER_H