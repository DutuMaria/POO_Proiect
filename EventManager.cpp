//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "EventManager.h"


void EventManager::addEvent(std::shared_ptr<Event> &event) {
    events.push_back(event);
}

bool EventManager::verifyVenue(std::shared_ptr<Venue> &venue) {

    return false;
}

std::ostream &operator<<(std::ostream &os, const EventManager &eventManager) {
    os<<"events:\n";
    for(auto &event: eventManager.events)
        os<<"\tEvenimentul: "<<event->getName()<<" de pe "<<event->getDate()<<" are locatia: "<<event->getVenue()->getName()<<"\n";
    os<<"\n";
    return os;
}

EventManager::~EventManager() {
    std::cout<<"destructor EventManager\n";

}










