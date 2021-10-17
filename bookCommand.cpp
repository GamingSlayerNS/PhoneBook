//
// Created by SpeedyNS on 10/12/2019.
//

#include "bookCommand.h"
#include <iostream>

//Protected IOstreams
void bookCommand::outputString(std::string userString)
{
    outStream << userString << std::endl;
}

std::string bookCommand::promptLine(const std::string& prompt)
{
    std::string userResponse;
    outStream << prompt << std::endl;
    std::getline(inStream, userResponse);

    return userResponse;
}

//Constructor
bookCommand::bookCommand(std::istream &in, std::ostream &out)
        :   inStream(in), outStream(out)
{

}