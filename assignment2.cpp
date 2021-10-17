#include <iostream>
#include "phoneBook.h"
#include "menuList.h"
#include "addUpdateCommand.h"
#include "eraseCommand.h"
#include "printCommand.h"

int main() {
    std::cout << "Starting the Phone Book" << std::endl << std::endl;

    phoneBook theBook;
    menuList mainMenu;

    addUpdateCommand addUpdateC(theBook, std::cin, std::cout);
    eraseCommand eraseC(theBook, std::cin, std::cout);
    printCommand printC(theBook, std::cin, std::cout);

    menuItem addUpdateMenu('a', "add/update", addUpdateC);
    menuItem eraseMenu('e', "erase", eraseC);
    menuItem printMenu('p', "print", printC);

    mainMenu.add(addUpdateMenu);
    mainMenu.add(eraseMenu);
    mainMenu.add(printMenu);

    mainMenu.start();

    return 0;
}