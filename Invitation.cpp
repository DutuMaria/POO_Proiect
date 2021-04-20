//
// Created by Maria Duțu on 15.03.2021.
//

#include "Invitation.h"

#include <utility>

Invitation::Invitation() {}

//Invitation::Invitation(std::shared_ptr<Event> _event, std::shared_ptr<Participant> _participant): event(std::move(_event)), participant(std::move(_participant)) {}

void Invitation::setResponse(bool _response) {
    response = _response;
}

void Invitation::setEvent(std::shared_ptr<Event> _event) {
    event = _event;
}

void Invitation::setParticipant(std::shared_ptr<Participant> _participant) {
    participant = _participant;
}

std::optional<std::shared_ptr<Event>> Invitation::getEvent() const {
    return event;
}

std::optional<std::shared_ptr<Participant>> Invitation::getParticipant() const {
    return participant;
}


std::optional<bool> Invitation::getResponse() const {
    return response;
}

std::ostream &operator<<(std::ostream &os, const std::shared_ptr<Invitation> &invitation) {
    if(invitation->getResponse().has_value()) {
        if (invitation->getResponse()) {
            os << invitation->getParticipant().value()->getName() << " a acceptat invitatia la "
               << invitation->getEvent().value()->getName() << "\n";
        }
        else {
            os << invitation->getParticipant().value()->getName() << " NU a acceptat invitatia la "
               << invitation->getEvent().value()->getName() << "\n";
        }
    }
    else{
        os<<"Invitatia nu a fost trimisa!"<<"\n";
    }
    return os;
}

Invitation::~Invitation() {

}




