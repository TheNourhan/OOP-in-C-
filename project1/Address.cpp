#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Address::Address(string place, string type, string description){
    this->place = place;
    this->type = type;
    this->description = description;
}

void Address::setPlace(const string& new_place){
    cout << "setPlace..." << endl;
    this->place = new_place;
}

void Address::setType(const string& new_type){
    cout << "setType..." << endl;
    this->type = new_type;
}

void Address::setDescription(const string& new_description){
    cout << "setDescription..." << endl;
    this->description = new_description;
}

string Address::get() const{
    string details = "address: " + this->place + "\n";
    details += "type: " + this->type + "\n";
    details += "description: " + this->description + "\n";
    return details;
}
