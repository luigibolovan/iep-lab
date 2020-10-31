#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
    private:
        int id;
        std::string name;
        std::string email;
    public:
       Person(){ std::cout << "Default constructor called" << std::endl; }
       Person(int id, std::string name, std::string mail);
       // item 6: explicitly disable the use of compiler generated functions you do not want
       Person& operator=(const Person&);
       Person(const Person& copyPerson){ std::cout << "Copy constructor called" << std::endl;}
};

#endif