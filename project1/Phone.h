#ifndef PHONE_H_INCLUDED
#define PHONE_H_INCLUDED

#include <string>
#include <vector>

class Phone{
private:

    std::string phone;
    std::string type;
    std::string description;

public:

    Phone(std::string phone, std::string type, std::string description);
    void setPhone(const std::string& new_phone);
    void setType(const std::string& new_type);
    void setDescription(const std::string& new_description);
    std::vector<std::string> get() const;

};

#endif // PHONE_H_INCLUDED
