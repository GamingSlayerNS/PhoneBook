//
// Created by SpeedyNS on 10/12/2019.
//

#ifndef PROJECT2_PHONEBOOK_H
#define PROJECT2_PHONEBOOK_H

#include "phoneBookEntry.h"
#include <vector>
#include <string>

class phoneBook
{
private:
    typedef std::vector<phoneBookEntry> phoneBookEntryList;
    typedef phoneBookEntryList::iterator iterator;
    typedef phoneBookEntryList::const_iterator const_iterator;
    phoneBookEntryList phoneBookEntries;

public:
    iterator begin();
    iterator end();

public:
    phoneBook();
    void insert(const phoneBookEntry &entry);
    void insert(const std::string &name, const std::string &number, const std::string &email);
    void insert(const std::string &name, const std::string &number);
    //void update(const std::string &name, const std::string &number, const std::string &email);
    bool erase(const std::string& name);
    bool find(const std::string& name);
    void print() const;
    void print(std::ostream &out) const;
    void debug(std::ostream &out) const;
    std::size_t size() const;
    std::string nameWhiteSpace(const std::string& name) const;
    std::string numberWhiteSpace(const std::string& number) const;
};


#endif //PROJECT2_PHONEBOOK_H
