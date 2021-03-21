//
// Created by Maria Duțu on 15.03.2021.
//

#include "Participant.h"
#include <iostream>
#include <utility>


Participant::Participant(int _id, std::string  _name, std::string  _telephone, int _age, std::string& _response): id(_id), name(std::move(_name)), telephone(std::move(_telephone)), age(_age) {}

void Participant::setName(const std::string &_name) {
    name = _name;
}

void Participant::setTelephone(const std::string &_telephone) {
    telephone = _telephone;
}

void Participant::setAge(int _age) {
    age = _age;
}

std::string Participant::getName()const {
    return name;
}

std::string Participant::getTelephone()const {
    return telephone;
}

int Participant::getAge()const {
    return age;
}

//bool Participant::sendResponse(const Participant &participant, const Event &event) {
//    std::cout<<"Write accept/decline: \n";
//    std::cin>>response;
//    if(response == "accept")
//        return true;
//    return false;
//}
//bool Participant::plusOne(bool ok) {
//    if(ok)
//        return true;
//    return false;
//}

std::ostream &operator<<(std::ostream &os, const Participant &participant) {
    os<<"name: "<<participant.name<<" "<<participant.age<<" "<<participant.telephone<<"\n";
    return os;
}

Participant::~Participant() {

}


















