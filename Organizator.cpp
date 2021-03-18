//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include "Organizator.h"

Organizator::Organizator(const std::string &name): name(name) {}

std::string Organizator::getName() {
    return name;
}

std::ostream &operator<<(std::ostream &os, const Organizator &organizator) {
    os<<"name: "<<organizator.name<<"\n";
    return os;
}
