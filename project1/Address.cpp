#include "Address.h"
#include <iostream>
#include <string>
#include <vector>
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

vector<string> Address::get()const{
    vector<string> details = {this->place, this->type, this->description};
    return details;
}
