#ifndef EMAIL_H_INCLUDED
#define EMAIL_H_INCLUDED

#include <string>

class Email{
private:

    std::string email;
    std::string type;
    std::string description;

public:

    Email(std::string email, std::string type, std::string description);
    void setEmail(const std::string& new_email);
    void setType(const std::string& new_type);
    void setDescription(const std::string& new_description);
    std::string get() const;

};

#endif // EMAIL_H_INCLUDED
