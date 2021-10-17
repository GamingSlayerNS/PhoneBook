//
// Created by SpeedyNS on 10/12/2019.
//

#ifndef PROJECT2_ERASECOMMAND_H
#define PROJECT2_ERASECOMMAND_H

#include "bookCommand.h"
#include "phoneBook.h"

class eraseCommand : public bookCommand
{
private:
    phoneBook &book;

public:
    eraseCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream);
    virtual void execute();
};


#endif //PROJECT2_ERASECOMMAND_H
