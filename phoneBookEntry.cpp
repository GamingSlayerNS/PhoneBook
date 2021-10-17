//
// Created by SpeedyNS on 10/12/2019.
//

#include <iostream>
#include "phoneBookEntry.h"

phoneBookEntry::phoneBookEntry()
{
    entryName = "";
    entryPhoneNumber = "";
    entryEmail = "";
}

phoneBookEntry::phoneBookEntry(const std::string &name, const std::string &number)
{
    entryName = name;
    entryPhoneNumber = number;
    entryEmail = "";
}

phoneBookEntry::phoneBookEntry(const std::string &name, const std::string &number, const std::string &email)
{
    entryName = name;
    entryPhoneNumber = number;
    entryEmail = email;
}

//Copy Constructor
phoneBookEntry::phoneBookEntry(const phoneBookEntry &from)
{
    entryName = from.entryName;
    entryPhoneNumber = from.entryPhoneNumber;
    entryEmail = from.entryEmail;
}

std::string phoneBookEntry::name() const
{
    return entryName;
}

std::string phoneBookEntry::phoneNumber() const
{
    return entryPhoneNumber;
}

std::string phoneBookEntry::email() const
{
    return entryEmail;
}

void phoneBookEntry::phoneNumber(const std::string &newNumber)
{
    entryPhoneNumber = newNumber;
}

void phoneBookEntry::email(const std::string &newEmail)
{
    entryEmail = newEmail;
}
