#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <vector>
#include <string>
#include "User.h"

class Contact {
private:

    std::vector<User> users;

public:

    Contact();
    void AddUser();
    void EditUser();
    int CountUser();
    std::string SearchUser();
    void DeleteUser();
    std::string ShowAll();

};

#endif // CONTACT_H_INCLUDED
