#include "User.h"
#include "Phone.h"
#include "Email.h"
#include "Address.h"
#include <iostream>
using namespace std;

User::User(int id, string firstname, string lastname, char gender, string city, Date addedDate,
          const vector<Address>& addresses, const vector<Phone>& phones, const vector<Email>& emails) {
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

bool User::search_address(const std::string& query){
    for (const auto& address : this->addresses) {
        if(address.get()[0] == query){
            return true;
        }
    }
    return false;
};

bool User::search_phone(const std::string& query){
    for (const auto& phone : this->phones) {
        if(phone.get()[0] == query){
            return true;
        }
    }
    return false;
};

bool User::search_email(const std::string& query){
    for (const auto& email : this->emails) {
        if(email.get()[0] == query){
            return true;
        }
    }
    return false;
};

bool User::search(const std::string& query) {
    if(search_phone(query)){
        return true;
    }
    if(search_email(query)){
        return true;
    }
    if(search_address(query)){
        return true;
    }
    return false;
}

string User::get_firstname(){
    return this->firstname;
}

string User::get_lastname(){
    return this->lastname;
}

string User::get_city(){
    return this->city;
}

char User::get_gender(){
    return this->gender;
}

void User::set_firstname(const std::string& value){
    this->firstname = value;
}

void User::set_lastname(const std::string& value){
    this->lastname = value;
}

void User::set_gender(const char& value){
    this->gender = value;
}

void User::set_city(const std::string& value){
    this->city = value;
}

void User::add_phone(const std::string& phone, const std::string& type, const std::string& description){
    Phone phone_obj(phone, type, description);
    phones.push_back(phone_obj);
}

void User::edit_phone(const std::string& old_value, const std::string& new_value, const std::string& type){
    for (auto& phone : phones) {
        if (phone.get()[0] == old_value) {
            if(type == "phone"){
                phone.setPhone(new_value);
            }else if (type == "type") {
                phone.setType(new_value);
            } else if (type == "description") {
                phone.setDescription(new_value);
            }
            return;
        }
    }
}

void User::delete_phone(const std::string& value){
    for (auto it = phones.begin(); it != phones.end(); ++it) {
        if (it->get()[0] == value) {
            phones.erase(it);
            std::cout << "Phone number deleted." << std::endl;
            return;
        }
    }
}

void User::add_email(const std::string& email, const std::string& type, const std::string& description){
    Email email_obj(email, type, description);
    emails.push_back(email_obj);
}

void User::edit_email(const std::string& old_value, const std::string& new_value, const std::string& type){
    for (auto& email : emails) {
        if (email.get()[0] == old_value) {
            if(type == "email"){
                email.setEmail(new_value);
            }else if (type == "type") {
                email.setType(new_value);
            } else if (type == "description") {
                email.setDescription(new_value);
            }
            return;
        }
    }
}

void User::delete_email(const std::string& value){
    for (auto it = emails.begin(); it != emails.end(); ++it) {
        if (it->get()[0] == value) { // Assuming Phone::get() returns the phone number
            emails.erase(it);
            std::cout << "Email number deleted." << std::endl;
            return;
        }
    }
}

void User::add_address(const std::string& address, const std::string& type, const std::string& description){
    Address address_obj(address, type, description);
    addresses.push_back(address_obj);
}

void User::edit_address(const std::string& old_value, const std::string& new_value, const std::string& type){
    for (auto& address : addresses) {
        if (address.get()[0] == old_value) {
            if(type == "place"){
                address.setPlace(new_value);
            }else if (type == "type") {
                address.setType(new_value);
            } else if (type == "description") {
                address.setDescription(new_value);
            }
            return;
        }
    }
}

void User::delete_address(const std::string& value){
    for (auto it = addresses.begin(); it != addresses.end(); ++it) {
        if (it->get()[0] == value) { // Assuming Phone::get() returns the phone number
            addresses.erase(it);
            std::cout << "Address number deleted." << std::endl;
            return;
        }
    }
}

void User::show()const {
    cout<< "id: " << this->id << "\n";
    cout<< "firstname: " << this->firstname << "\n";
    cout<< "lastname: " << this->lastname << "\n";
    cout<< "gender: " << this->gender << "\n";
    cout<< "city: " << this->city << "\n";
    cout << "addedDate: " << this->addedDate.year << "-" << this->addedDate.month << "-" << this->addedDate.day << "\n";

    cout << "********* phones *********\n";
    for (const auto& phone : this->phones) {
        cout << "phone number: " << phone.get()[0] << "\n";
        cout << "type: " << phone.get()[1] << "\n";
        cout << "description: " << phone.get()[2] << "\n\n";
    }
    cout << "********* emails *********\n";
    for (const auto& email : this->emails) {
        cout << "email: " << email.get()[0] << "\n";
        cout << "type: " << email.get()[1] << "\n";
        cout << "description: " << email.get()[2] << "\n\n";
    }

    cout << "********* addresses *********\n";
    for (const auto& address : this->addresses) {
        cout << "place: " << address.get()[0] << "\n";
        cout << "type: " << address.get()[1] << "\n";
        cout << "description: " << address.get()[2] << "\n\n";
    }
}
