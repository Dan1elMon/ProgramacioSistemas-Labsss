#include "biblioteca.h"
#include <iostream>
#include <cstring>

void person::setDetails(const char* name, int id) {
    std::strncpy(this->name, name, sizeof(this->name) - 1);
    this->name[sizeof(this->name) - 1] = '\0';
    this->id = id;
}

void person::getDetails() const {
    std::cout << "Name: " << name << "\nID: " << id << std::endl;
}
