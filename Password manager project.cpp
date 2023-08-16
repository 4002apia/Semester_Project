#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

unordered_map<string, string> passwordManager;

void addPassword() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    passwordManager[username] = password;
    cout << "Password added successfully!" << endl;
}

void viewPassword() {
    string username;
    cout << "Enter username: ";
    cin >> username;

    if (passwordManager.count(username) != 0) {
        cout << "Username: " << username << endl;
        cout << "Password: " << passwordManager[username] << endl;
    } else {
        cout << "Username not found." << endl;
    }
}
void deletePassword() {
    string username;
    cout << "Enter username to delete : ";
    cin >> username;

    if (passwordManager.count(username) != 0) {
        passwordManager.erase(username);
        cout << "Password deleted successfully!" << endl;
    } else {
        cout << "Username not found." << endl;
    }
}

int main() {
    int option;

    while (true) {
        cout << "Welcome to Easy_Pass Manager" << endl;
        cout << "1. Add password" << endl;
        cout << "2. View password" << endl;
         cout << "3. Delete password" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose option: ";
        cin >> option;

        switch (option) {
            case 1:
                addPassword();
                break;
            case 2:
                viewPassword();
                break;
            case 3:
                deletePassword();
                break;
            case 4:
                cout << "Program is Loading......"<<endl;
                return 0;
            default:
                cout << "Invalid option. Retry." << endl;
        }

        cout << endl;
    }
    return 0;
}
