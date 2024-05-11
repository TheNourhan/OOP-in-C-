#include "Address.h"
#include <iostream>
#include <string>
using namespace std;

Address::Address(){
    place = "0";
    type = "";
    description = "";
}

void Address::setPlace(){
    cout << "setPlace..." << endl;
}

void Address::setType(){
    cout << "setType..." << endl;
}

void Address::setDescription(){
    cout << "setDescription..." << endl;
}

string Address::get(){
    cout << "getPlace..." << endl;
}
