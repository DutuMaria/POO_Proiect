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
        if(event->getOrganizer().has_value())
//        and event->getParticipants().has_value())
        {
            os << "\tEvenimentul: " << event->getName() << " de pe " << event->getDate() << " are locatia: "
               << event->getVenue()->getName() << " si este organizat de: " << event->getOrganizer()->lock()->getName();
//               <<"\tParticipantii sunt: ";
//                for(auto &participant: event->getParticipants().value()){
//                    os<<participant.lock()->getName();
//                }
                os << "\n";
        }
        else
        {    os << "\tEvenimentul: " << event->getName() << " de pe " << event->getDate() << " are locatia: "
                << event->getVenue()->getName() << " (organizatorul nu este setat inca) "
                << "\n";
        }
    }
    os<<"\n";
    return os;
}

std::string EventManager::status(const std::string &date, std::shared_ptr<Event> &event) {
    if(date == event->getDate())
        return "Evenimentul: " + event->getName() + " este in desfasurare!";
    // trebuie sa mai implementez cazul in care evenimentul inca nu s-a desfasurat sau s-a terminat .. momentan pt cazurile astea spun ca nu este data evenimentului
    return "Data: " + date + " nu este data evenimentului: " + event->getName() + "!";
}

//void EventManager::addParticipant(const std::weak_ptr<Participant> &participant, const std::shared_ptr<Event> &event) {
//    event->getParticipants()->push_back(participant);
//}

//int EventManager::nrOfParticipants(const std::shared_ptr<Event> &event) {
//    return event->getParticipants()->size();
//}

EventManager::~EventManager() {
    std::cout<<"destructor EventManager\n";

}













