//
// Created by SpeedyNS on 10/12/2019.
//

#include "addUpdateCommand.h"

addUpdateCommand::addUpdateCommand(phoneBook &bookIn, std::istream &inStream, std::ostream &outStream)
        :  bookCommand(inStream, outStream), book(bookIn)
{

}

void addUpdateCommand::execute()
{
    std::string tempName;
    std::string tempNumber;
    std::string tempEmail;
    tempName = promptLine("Enter name to add/update");
    tempNumber = promptLine("Enter phone number");
    tempEmail = promptLine("Enter e-mail address");
    if(book.find(tempName))
    {
        outputString("Updating phone book entry for " + tempName);
        book.insert(tempName, tempNumber, tempEmail);
    }
    else
    {
        outputString("Adding phone book entry for " + tempName);
        book.insert(tempName, tempNumber, tempEmail);
    }
}
