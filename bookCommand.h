//
// Created by SpeedyNS on 10/12/2019.
//

#ifndef PROJECT2_BOOKCOMMAND_H
#define PROJECT2_BOOKCOMMAND_H

#include <iostream>
#include "command.h"

class bookCommand : public command
{
protected:
    std::istream &inStream;
    std::ostream &outStream;
    void outputString(std::string userString);
    std::string promptLine(const std::string& prompt);

public:
    bookCommand(std::istream &in, std::ostream &out);
};


#endif //PROJECT2_BOOKCOMMAND_H
