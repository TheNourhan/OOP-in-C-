#include "User.h"
#include <iostream>
using namespace std;

User::User(int id, std::string firstname, std::string lastname, char gender, std::string city, Date addedDate,
          const std::vector<Address>& addresses, const std::vector<Phone>& phones, const std::vector<Email>& emails) {
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
    this->gender = gender;
    this->city = city;
    this->addedDate = addedDate;
    this->addresses = addresses;
    this->phones = phones;
    this->emails = emails;
}

void User::search() {
    cout << "Searching..." << endl;
}

void User::show() {
    cout << "Showing user details..." << endl;
    cout<< "id: " << this->id << "\n";
    cout<< "firstname: " << this->firstname << "\n";
    cout<< "lastname: " << this->lastname << "\n";
    cout<< "gender: " << this->gender << "\n";
    cout<< "city: " << this->city << "\n";
    cout << "addedDate: " << this->addedDate.year << "-" << this->addedDate.month << "-" << this->addedDate.day << "\n";

    cout << "********* phones *********\n";
    for (const auto& phone : this->phones) {
        cout << phone.get() << "\n";
    }
    cout << "********* emails *********\n";
    for (const auto& email : this->emails) {
        cout << email.get() << "\n";
    }

    cout << "********* addresses *********\n";
    for (const auto& address : this->addresses) {
        cout << address.get() << "\n";
    }
}
