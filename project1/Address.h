#ifndef ADDRESS_H_INCLUDED
#define ADDRESS_H_INCLUDED

#include <string>

class Address{
private:

    std::string place;
    std::string type;
    std::string description;

public:

    Address();
    void setPlace();
    void setType();
    void setDescription();
    std::string get();

};

#endif // ADDRESS_H_INCLUDED
