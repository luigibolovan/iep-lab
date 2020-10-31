#include "person.h"


// item 4: make sure that objects are initalized before they're used
Person::Person(int id, std::string name, std::string mail)
    :id(id),
    name(name),
    email(mail)
{
        std::cout << "Person "<< name << " initialized" << std::endl;
}

int main()
{
    // item 5: know what functions C++ silently writes and calls
    Person p1(1, "Luigi", "luigibolovan@gmail.com"); // initialization constructor called
    Person p2(p1);  // copy constructor called
    Person p3 = p1; // copy constructor called

    // error
    // item 6: explicitly disable the use of compiler generated functions you do not want
    p2 = p1; // = operator should be called but it's disabled by only declaring the operator within the class

    return 0;
}
