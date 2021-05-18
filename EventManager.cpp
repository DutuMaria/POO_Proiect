//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "EventManager.h"


std::vector<std::shared_ptr<Event>> EventManager::getEvents() {
    return elements;
}

void EventManager::addEvent(const std::shared_ptr<Event> &event) {
    elements.push_back(event);
}

std::ostream &operator<<(std::ostream &os, const EventManager &eventManager) {
    os<<"Events:\n";
    for(auto &event: eventManager.elements) {
        if(event->getOrganizer().has_value() and !event->getParticipants().empty())
        {
            os << "\tEvenimentul: " << event->getName() << " de pe " << event->getDate() << " are locatia: "
               << event->getVenue()->getName() << " si este organizat de: " << event->getOrganizer()->lock()->getName()<<"\n"
               <<"\t\tParticipantii sunt: ";
                for(auto &participant: event->getParticipants()){
                    os<<participant.lock()->getName()<< ", ";
                }

                os <<"\n\t\t=> "<<event->getNrParticipants()<<" participanti"<<"\n";
        }
        else if(!event->getOrganizer().has_value() and event->getParticipants().empty())
        {    os << "\tEvenimentul: " << event->getName() << " de pe " << event->getDate() << " are locatia: "
                << event->getVenue()->getName() << " (organizatorul nu este setat inca), iar invitatiile nu au fost trimise."
                << "\n";
        }
        else if(event->getParticipants().empty()){
            os << "\tEvenimentul: " << event->getName() << " de pe " << event->getDate() << " are locatia: "
               << event->getVenue()->getName() << " si este organizat de: " << event->getOrganizer()->lock()->getName()<<"\n"
               <<"\t\t Invitatiile nu au fost trimise inca."
               << "\n";
        }
    }
    os<<"\n";
    return os;
}

std::string EventManager::status(const std::string &date, std::shared_ptr<Event> &event) {
    if(date == event->getDate())
        return "Evenimentul: " + event->getName() + " este in desfasurare!";
    return "Data: " + date + " nu este data evenimentului: " + event->getName() + "!";
}


EventManager::~EventManager() {
    std::cout<<"destructor EventManager\n";

}













