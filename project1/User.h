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

    bool search_address(const std::string& query);
    bool search_phone(const std::string& query);
    bool search_email(const std::string& query);

public:

    User(int id, std::string firstname, std::string lastname, char gender, std::string city, Date addedDate,
          const std::vector<Address>& addresses = {}, const std::vector<Phone>& phones = {}, const std::vector<Email>& emails = {});
    bool search(const std::string& query);
    std::string get_firstname();
    std::string get_lastname();
    std::string get_city();
    char get_gender();
    void set_firstname(const std::string& value);
    void set_lastname(const std::string& value);
    void set_gender(const char& value);
    void set_city(const std::string& value);
    void add_phone(const std::string& phone, const std::string& type = "null", const std::string& description = "null");
    void edit_phone(const std::string& old_value, const std::string& new_value, const std::string& type);
    void delete_phone(const std::string& value);
    void add_email(const std::string& email, const std::string& type = "null", const std::string& description = "null");
    void edit_email(const std::string& old_value, const std::string& new_value, const std::string& type);
    void delete_email(const std::string& value);
    void add_address(const std::string& address, const std::string& type = "null", const std::string& description = "null");
    void edit_address(const std::string& old_value, const std::string& new_value, const std::string& type);
    void delete_address(const std::string& value);
    void show() const;

};

#endif // USER_H_INCLUDED
