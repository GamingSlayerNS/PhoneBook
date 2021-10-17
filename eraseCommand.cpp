//
// Created by SpeedyNS on 10/12/2019.
//

#include "eraseCommand.h"

eraseCommand::eraseCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream)
    :   bookCommand(inStream, outStream), book(bookIn)
{

}

void eraseCommand::execute()
{
    std::string nameToErase;
    nameToErase = promptLine("Enter name to erase");
    if(book.erase(nameToErase))
        outputString("Phone book entry " + nameToErase + " was erased");
    else
        outputString("Phone book entry " + nameToErase + " was not erased");
}
