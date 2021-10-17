cmake_minimum_required(VERSION 3.14)
project(Project2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project2 assignment2.cpp project2Sample.cpp incrementCommand.h decrementCommand.h phoneBookEntry.cpp phoneBookEntry.h phoneBook.cpp phoneBook.h bookCommand.cpp bookCommand.h printCommand.cpp printCommand.h addUpdateCommand.cpp addUpdateCommand.h eraseCommand.cpp eraseCommand.h)