#include "Phone.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Phone::Phone(string phone, string type, string description) {
    this->phone = phone;
    this->type = type;
    this->description = description;
}

void Phone::setPhone(const string& new_phone){
    cout << "setPhone..." << endl;
    this->phone = new_phone;
}

void Phone::setType(const string& new_type){
    cout << "setType..." << endl;
    this->type = new_type;
}

void Phone::setDescription(const string& new_description){
    cout << "setDescription..." << endl;
    this->description = new_description;
}

vector<string> Phone::get()const{
    vector<string> details = {this->phone, this->type, this->description};
    return details;
}
