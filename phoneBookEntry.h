//
// Created by SpeedyNS on 10/12/2019.
//

#ifndef PROJECT2_PHONEBOOKENTRY_H
#define PROJECT2_PHONEBOOKENTRY_H

#include <string>

class phoneBookEntry
{
private:
    std::string entryName;
    std::string entryPhoneNumber;
    std::string entryEmail;

public:
    phoneBookEntry();
    phoneBookEntry(const std::string &name, const std::string &number);
    phoneBookEntry(const std::string &name, const std::string &number,  const std::string &email);
    phoneBookEntry(const phoneBookEntry &from);     //Copy constructor
    std::string name() const;
    std::string phoneNumber() const;
    std::string email() const;
    void phoneNumber(const std::string &newNumber);
    void email(const std::string &newEmail);
};


#endif //PROJECT2_PHONEBOOKENTRY_H
