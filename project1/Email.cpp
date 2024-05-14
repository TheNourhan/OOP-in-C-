#include "Email.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Email::Email(string email, string type, string description){
    this->email = email;
    this->type = type;
    this->description = description;
}

void Email::setEmail(const string& new_email){
    cout << "setEmail..." << endl;
    this->email = new_email;
}

void Email::setType(const string& new_type){
    cout << "setType..." << endl;
    this->type = new_type;
}

void Email::setDescription(const string& new_description){
    cout << "setDescription..." << endl;
    this->description = new_description;
}

vector<string> Email::get()const{
    vector<string> details = {this->email, this->type, this->description};
    return details;
}

