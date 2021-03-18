//
// Created by Maria Duțu on 15.03.2021.
//

#include "Participant.h"
#include <iostream>

Participant::Participant(const std::string &name, const std::string &telephone, int age): name(name), age(age), telephone(telephone) {}

std::string Participant::getName() {
    return name;
}

std::string Participant::getTelephone() {
    return telephone;
}

int Participant::getAge() {
    return age;
}

std::ostream &operator<<(std::ostream &os, const Participant &participant) {
    os<<"name: "<<participant.name<<" "<<participant.age<<" "<<participant.telephone<<"\n";
    return os;
}

Participant::~Participant() {

}



