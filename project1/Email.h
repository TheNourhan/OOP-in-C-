#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

#include <string>

class Email{
private:

    std::string email;
    std::string type;
    std::string description;

public:

    Email();
    void setEmail();
    void setType();
    void setDescription();
    std::string get();

};

#endif // EMAIL_H_INCLUDED
