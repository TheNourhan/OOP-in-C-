#include "Contact.h"
#include "User.h"
#include <iostream>
#include <string>
using namespace std;

Contact::Contact(){
    count = 0;
}

void Contact::AddUser(const int& id, const string& firstname, const string& lastname, const char& gender, const string& city, const Date& date){
    User user_obj(id, firstname, lastname, gender, city,date);
    users.push_back(user_obj);
    count++;
}

void Contact::EditUser(const std::string& old_value, const std::string& new_value, const std::string& type) {
    for (User& user : users) {
        if (type == "firstname" && user.get_firstname() == old_value) {
            user.set_firstname(new_value);
        } else if (type == "lastname" && user.get_lastname() == old_value) {
            user.set_lastname(new_value);
        } else if (type == "city" && user.get_city() == old_value) {
            user.set_lastname(new_value);
        }
    }
}

int Contact::CountUser() {
    return count;
}

bool Contact::SearchUser(const std::string& query) {
    for (User& user : users) {
        if (user.get_firstname() == query) {
            return true;
        } else if (user.get_lastname() == query) {
            return true;
        } else if (user.get_city() == query) {
            return true;
        }
    }
    return false;
}

void Contact::DeleteUser(const std::string& value) {
    cout<< "deleteUser..." << "\n";
    int indexToDelete = -1;
    for (int i = 0; i < users.size(); ++i) {
        if (users[i].get_firstname() == value || users[i].get_lastname() == value) {
            indexToDelete = i;
            break;
        }
    }

    if (indexToDelete != -1) {
        users.erase(users.begin() + indexToDelete);
        count--;
    }
}

void Contact::ShowAll() {
    for (const User& user : users) {
        user.show();
    }
}
