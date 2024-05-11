#include "Email.h"
#include <iostream>
#include <string>
using namespace std;

Email::Email(){
    email = "";
    type = "";
    description = "";
}

void Email::setEmail(){
    cout << "setEmail..." << endl;
}

void Email::setType(){
    cout << "setType..." << endl;
}

void Email::setDescription(){
    cout << "setDescription..." << endl;
}

string Email::get(){
    cout << "getEmail..." << endl;
}

