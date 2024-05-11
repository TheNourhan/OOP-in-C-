#include "Phone.h"
#include <iostream>
#include <string>
using namespace std;

Phone::Phone(){
    phone = "0";
    type = "";
    description = "";
}

void Phone::setPhone(){
    cout << "setPhone..." << endl;
}

void Phone::setType(){
    cout << "setType..." << endl;
}

void Phone::setDescription(){
    cout << "setDescription..." << endl;
}

string Phone::get(){
    cout << "getPhone..." << endl;
}
