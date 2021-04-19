//
// Created by Maria Duțu on 15.03.2021.
//

#include "Participant.h"
#include <iostream>
#include <utility>
#include "EventManager.h"


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


void Participant::receiveInvitation_and_respond(const std::shared_ptr<Invitation> &invitation, const std::shared_ptr<Event> &event) {
    invitation->setParticipant(shared_from_this());
    invitation->setEvent(event);

    if(EventsProgram.find(event->getDate()) == EventsProgram.end()){   // daca data este libera => particip la eveniment
        EventsProgram.insert({event->getDate(), event});

        invitation->setResponse(true);
//        EventManager::instance().addParticipant(shared_from_this(), event);

    }
    else{
        invitation->setResponse(false);
    }
}

std::ostream &operator<<(std::ostream &os, const std::shared_ptr<Participant> &participant) {
//    os<<participant->name<<" "<<participant->age<<" "<<participant->telephone<<" participa la: "<<"\n";
    os<<participant->name<< " participa la: "<<"\n";
    for(const auto& [key, value] : participant->EventsProgram) {
        os<<"\t"<<value->getName()<<" pe "<< key <<"\n";
    }
    os<<"\n";
    return os;
}

Participant::~Participant() {
    std::cout << "destructor Participant " + name + "\n";
}




















