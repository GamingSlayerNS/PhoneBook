//
// Created by SpeedyNS on 10/12/2019.
//

#ifndef PROJECT2_ADDUPDATECOMMAND_H
#define PROJECT2_ADDUPDATECOMMAND_H

#include "bookCommand.h"
#include "phoneBook.h"

class addUpdateCommand : public bookCommand
{
private:
    phoneBook &book;

public:
    addUpdateCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream);
    virtual void execute();
};


#endif //PROJECT2_ADDUPDATECOMMAND_H
