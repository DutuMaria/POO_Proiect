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
        if(event->getOrganizer().has_value()) {
            os << "\tEvenimentul: " << event->getName() << " de pe " << event->getDate() << " are locatia: "
               << event->getVenue()->getName() << " si este organizat de: " << event->getOrganizer()->lock()->getName()
               << "\n";
        }
        else{os << "\tEvenimentul: " << event->getName() << " de pe " << event->getDate() << " are locatia: "
                << event->getVenue()->getName() << " (organizatorul nu este setat inca) "
                << "\n";
        }
    }
    os<<"\n";
    return os;
}

EventManager::~EventManager() {
    std::cout<<"destructor EventManager\n";

}












