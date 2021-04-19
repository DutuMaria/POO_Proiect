//
// Created by Maria Duțu on 15.03.2021.
//

#include "Invitation.h"

#include <utility>

Invitation::Invitation(int _id): id(_id) {}

//Invitation::Invitation(int _id, std::shared_ptr<Event> _event, std::shared_ptr<Participant> _participant): id(_id), event(std::move(_event)), participant(std::move(_participant)) {}

void Invitation::setResponse(bool _response) {
    response = _response;
}

void Invitation::setEvent(std::shared_ptr<Event> _event) {
    event = _event;
}

void Invitation::setParticipant(std::shared_ptr<Participant> _participant) {
    participant = _participant;
}

std::shared_ptr<Event> Invitation::getEvent() const {
    return event;
}

std::shared_ptr<Participant> Invitation::getParticipant() const {
    return participant;
}

int Invitation::getId() const {
    return id;
}

bool Invitation::getResponse() const {
    return response;
}

std::ostream &operator<<(std::ostream &os, const std::shared_ptr<Invitation> &invitation) {
    if(invitation->getResponse()) {
        os << "(Invitatia: " << invitation->getId() <<") "<< invitation->getParticipant()->getName()<< "  a acceptat invitatia la " <<invitation->getEvent()->getName()<< "\n";
    }
    else{
        os << "(Invitatia: " << invitation->getId() <<") "<< invitation->getParticipant()->getName()<< " NU a acceptat invitatia la " <<invitation->getEvent()->getName()<< "\n";
    }

    return os;
}

Invitation::~Invitation() {

}




