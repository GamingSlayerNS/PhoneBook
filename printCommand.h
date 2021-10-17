//
// Created by SpeedyNS on 10/12/2019.
//

#ifndef PROJECT2_PRINTCOMMAND_H
#define PROJECT2_PRINTCOMMAND_H

#include "bookCommand.h"
#include "phoneBook.h"

class printCommand : public bookCommand
{
private:
    phoneBook &book;

public:
    printCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream);
    virtual void execute();
};


#endif //PROJECT2_PRINTCOMMAND_H
