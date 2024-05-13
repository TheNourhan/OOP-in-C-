#ifndef ADDRESS_H_INCLUDED
#define ADDRESS_H_INCLUDED

#include <string>

class Address{
private:

    std::string place;
    std::string type;
    std::string description;

public:

    Address(std::string place, std::string type, std::string description);
    void setPlace(const std::string& new_place);
    void setType(const std::string& new_type);
    void setDescription(const std::string& new_description);
    std::string get() const;

};

#endif // ADDRESS_H_INCLUDED
