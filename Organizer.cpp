//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "Organizer.h"


Organizer::Organizer(std::string _name): name(std::move(_name))  {}

void Organizer::setName(const std::string &_name) {
    name = _name;
}

std::string Organizer::getName()const {
    return name;
}

void Organizer::organizeEvent(std::shared_ptr<Event> &event) {
    events.insert(event);
    event->setOrganizer(shared_from_this());
}

std::ostream &operator<<(std::ostream &os, std::shared_ptr <Organizer> &organizer) {
    os<<organizer->name<<" organizeaza:"<<"\n";
    for(auto &event: organizer->events)
        os<<"\t"<<event->getName()<<"\n";
    os<<"\n";
    return os;
}

void
Organizer::sendInvitation(const std::shared_ptr<Invitation> &invitation, const std::shared_ptr<Event> &event, const std::shared_ptr<Participant> &participant) {
    participant->receiveInvitation_and_respond(invitation, event);
}

Organizer::~Organizer() {

}






