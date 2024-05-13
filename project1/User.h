#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

#include <string>
#include <vector>
#include "Address.h"
#include "Email.h"
#include "Phone.h"

struct Date {
    int year;
    int month;
    int day;
};

class User {
private:

    int id;
    std::string firstname;
    std::string lastname;
    char gender;
    std::string city;
    Date addedDate;
    std::vector<Address> addresses;
    std::vector<Phone> phones;
    std::vector<Email> emails;

public:

    User(int id, std::string firstname, std::string lastname, char gender, std::string city, Date addedDate,
          const std::vector<Address>& addresses, const std::vector<Phone>& phones, const std::vector<Email>& emails );
    void search();
    void show();

};

#endif // USER_H_INCLUDED
