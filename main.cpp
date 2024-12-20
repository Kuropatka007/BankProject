#include <iostream>
#include <string>
#include "Registration.h"
#include "User.h"
#include "utils/UUID.h"

using namespace std;
using namespace uuid;

int main() {
    while (true) {
        cout << "Welcome to the Bank! " << endl;
        cout << "Choose what do you want to do \n1. Login\n2. Register\n";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                // TODO: create login logic
                break;

            case 2:
                {

                    cout << "Enter your name: ";
                    string name;
                    cin.ignore();
                    getline(cin, name);

                    cout << "Enter your email: ";
                    string email;
                    cin >> email;

                    cout << "Enter your phone: ";
                    string phone;
                    cin >> phone;

                    cout << "Enter your password: ";
                    string password;
                    cin >> password;

                    string id = generate_uuid_v4();

                    User user(id, name, email, phone, "client", "admin");
                    user.setPassword(password);

                    Registration registration;
                    registration.registerUser(user);
                }
                break;

            default:
                cout << "Invalid choice. Try again.\n";
                break;
        }

        string key;
        cout << "Do you want to continue? Type 'exit' to quit or press any key to continue: ";
        cin >> key;

        if (key == "exit") {
            break;
        }
    }

    return 0;
}
