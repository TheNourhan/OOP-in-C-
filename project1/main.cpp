#include <iostream>
#include "Contact.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Contact myContact;

    myContact.AddUser(1, "John", "Doe", 'M', "New York", {2024, 5, 14});
    myContact.AddUser(2, "Jane", "Doe", 'F', "Los Angeles", {2024, 5, 15});
    myContact.AddPhoneNumber("John", "1234567890", "Mobile", "Personal");
    myContact.AddAddress("John", "123 Main St", "Home", "Residential");
    myContact.AddEmail("John", "john@example.com", "Work", "Office Email");

    std::cout << "All Users:" << std::endl;
    myContact.ShowAll();

    myContact.EditUser("John", "Johnny", "firstname");
    myContact.EditUser("Los Angeles", "Chicago", "city");

    std::cout << "\nAll Users after editing:" << std::endl;
    myContact.ShowAll();

    myContact.DeleteUser("Jane");
    std::cout << "\nAll Users after deletion:" << std::endl;
    myContact.ShowAll();


    /*
    cout << "\nUser *****************************\n";
    Date addedDate = {2024, 5, 13};
    User user(1, "John", "Doe", 'M', "New York", addedDate);
    user.add_phone("1234", "work", "work phone number");
    user.edit_phone("1234", "000000000", "phone");
    user.add_phone("123456798", "nourhan", "work phone number");
    user.show();
    user.delete_phone("123456798");
    user.show();
    cout << "search result: " << user.search("123 Main St") << "\n"; // 1
    cout << "\nPhone *****************************\n";
    Phone phoneObj("0507834430", "number", "number in ksa");
    phoneObj.get();
    phoneObj.setPhone("123456789");
    phoneObj.setType("string");
    phoneObj.setDescription("string in ksa");
    phoneObj.get();

    cout << "\nEmail *****************************\n";
    Email emailObj("nourhan@email.com", "email", "email at gmail");
    emailObj.get();
    emailObj.setEmail("n@n.com");
    emailObj.setType("string");
    emailObj.setDescription("string in email");
    emailObj.get();

    cout << "\nAdderss *****************************\n";
    Address addressObj("syria", "country", "live in country");
    addressObj.get();
    addressObj.setPlace("KSA");
    addressObj.setType("another country");
    addressObj.setDescription("string in country city");
    addressObj.get();
    */
    cout << "Done! .." << "\n";
    return 0;
}
