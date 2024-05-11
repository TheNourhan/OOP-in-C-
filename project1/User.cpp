#include "User.h"
#include <iostream>
using namespace std;

User::User() {
    id = 0;
    firstname = "";
    lastname = "";
    gender = '\0';
    city = "";
    addedDate = 0;
}

User::~User() {
    // Cleanup code
}

void User::search() {
    cout << "Searching..." << endl;
}

void User::show() {
    cout << "Showing user details..." << endl;
}
