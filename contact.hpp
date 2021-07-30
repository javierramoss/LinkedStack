#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    friend std::ostream& operator<<(std::ostream& out, const Contact& contact) {
        out << "Contact ID: " << contact.id << std::endl;
        out << "First name: " << contact.firstName << std::endl;
        out << "Last name: " << contact.lastName << std::endl;
        out << "Address: " << contact.address << std::endl;
        out << "Age: " << contact.age << std::endl;
        return out;
    }

private:
    std::string id;
    std::string firstName;
    std::string lastName;
    std::string address;
    int age;

public:
    Contact() : id("null"), firstName("unknown"), lastName("unknown"), address("unknown"), age(-1) {};
    Contact(const std::string id, const std::string firstName, const std::string lastName, const std::string address, int age) : id(id), firstName(firstName), lastName(lastName), address(address), age(age) {};
    ~Contact() {};
};

#endif