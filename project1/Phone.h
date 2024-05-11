#ifndef PHONE_H_INCLUDED
#define PHONE_H_INCLUDED

#include <string>

class Phone{
private:

    std::string phone;
    std::string type;
    std::string description;

public:

    Phone();
    void setPhone();
    void setType();
    void setDescription();
    std::string get();

};

#endif // PHONE_H_INCLUDED
