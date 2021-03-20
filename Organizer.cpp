//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "Organizer.h"

Organizer::Organizer(std::string _name): name(std::move(_name)) {}

void Organizer::setName(const std::string &_name) {
    name = _name;
}

std::string Organizer::getName()const {
    return name;
}

std::ostream &operator<<(std::ostream &os, const Organizer &organizer) {
    os<<"name: "<<organizer.name<<"\n";
    return os;
}


