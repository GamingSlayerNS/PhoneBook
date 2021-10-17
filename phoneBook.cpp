//
// Created by SpeedyNS on 10/12/2019.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include "phoneBook.h"

//phoneBook iterator functions
phoneBook::iterator phoneBook::begin()
{
    return phoneBookEntries.begin();
}

phoneBook::iterator phoneBook::end()
{
    return phoneBookEntries.end();
}

//public phoneBook functions
phoneBook::phoneBook()
{

}

void phoneBook::insert(const phoneBookEntry &entry)
{
    phoneBookEntries.push_back(entry);
}

void phoneBook::insert(const std::string &name, const std::string &number, const std::string &email)
{
    if(find(name))
    {
        for (int i = 0; i < (signed)size(); ++i)
        {
            if(phoneBookEntries[i].name().compare(name) == 0)
            {
                phoneBookEntries[i].phoneNumber(number);
                phoneBookEntries[i].email(email);
            }
        }
    }
    else
    {
        phoneBookEntry newEntry(name, number, email);
        phoneBookEntries.push_back(newEntry);
    }
}

void phoneBook::insert(const std::string &name, const std::string &number)
{
    if(find(name))
    {
        for (int i = 0; i < (signed)size(); ++i)
        {
            if(phoneBookEntries[i].name().compare(name) == 0)
            {
                phoneBookEntries[i].phoneNumber(number);
            }
        }
    }
    else
    {
        phoneBookEntry newEntry(name, number);
        phoneBookEntries.push_back(newEntry);
    }
}

//void phoneBook::update(const std::string &name, const std::string &number, const std::string &email)
//{
//    if(find(name))
//    {
//        for (int i = 0; i < (signed)size(); ++i)
//        {
//            if(phoneBookEntries[i].name().compare(name) == 0)
//            {
//                phoneBookEntries[i].phoneNumber(number);
//                phoneBookEntries[i].email(email);
//            }
//        }
//    }
//}

bool phoneBook::erase(const std::string& name)
{
    if(find(name))
    {
        for (int i = 0; i < (signed)size(); ++i)
        {
            if(phoneBookEntries[i].name().compare(name) == 0)
            {
                phoneBookEntries.erase(begin() + i);
                return true;
            }
        }
    }
    else
        return false;
}

bool phoneBook::find(const std::string& name)
{
    for(const phoneBookEntry& objEntry : phoneBookEntries)
    {
        if(objEntry.name().compare(name) == 0)
            return true;
    }

    return false;
}

void phoneBook::print() const
{
    std::cout << "Name:                          Phone Number:   E-Mail:" << std::endl;
    for(const phoneBookEntry& objEntry : phoneBookEntries)
    {
        std::cout << objEntry.name() << nameWhiteSpace(objEntry.name()) << objEntry.phoneNumber() << numberWhiteSpace(objEntry.phoneNumber()) << objEntry.email() << std::endl;
    }
}

void phoneBook::print(std::ostream &out) const
{
    out << "Name:                          Phone Number:   E-Mail:" << std::endl;
    for(const phoneBookEntry& objEntry : phoneBookEntries)
    {
        out << objEntry.name() << nameWhiteSpace(objEntry.name()) << objEntry.phoneNumber() << numberWhiteSpace(objEntry.phoneNumber()) << objEntry.email() << std::endl;
    }
}

void phoneBook::debug(std::ostream &out) const
{
    for (int i = 0; i < (signed)size(); ++i)
    {
        out << "[" << i << "] " << phoneBookEntries[i].name() << " " << phoneBookEntries[i].phoneNumber() << " " << phoneBookEntries[i].email() << std::endl;
    }
}

std::size_t phoneBook::size() const
{
    return phoneBookEntries.size();
}

std::string phoneBook::nameWhiteSpace(const std::string& name) const
{
    std::string whiteSpace;
    while((name.size() + whiteSpace.size()) < 31)
    {
        whiteSpace.append(" ");
    }

    return whiteSpace;
}

std::string phoneBook::numberWhiteSpace(const std::string &number) const
{
    std::string whiteSpace;
    while((number.size() + whiteSpace.size()) < 16)
    {
        whiteSpace.append(" ");
    }

    return whiteSpace;
}

