#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

#include <string>
#include <vector>
#include "Address.h"
#include "Email.h"
#include "Phone.h"

class User {
private:

    int id;
    std::string firstname;
    std::string lastname;
    char gender;
    std::string city;
    int addedDate;
    std::vector<Address> addresses;
    std::vector<Phone> phones;
    std::vector<Email> emails;

public:

    User();
    virtual ~User();

    void search();
    void show();

};

#endif // USER_H_INCLUDED
