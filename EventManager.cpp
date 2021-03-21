//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "EventManager.h"

//EventManager::EventManager(std::string _name): name(std::move(_name)) {}
//
//void EventManager::setName(const std::string &_name) {
//    name = _name;
//}
//
//std::string EventManager::getName()const {
//    return name;
//}

void EventManager::addEvent(const Event &event) {
    events.push_back(event);
}

std::ostream &operator<<(std::ostream &os, const EventManager &eventManager) {
    os<<"events:\n";
    for(auto &event: eventManager.events)
        os<<"\t"<<event;
    os<<"\n";
    return os;
}

EventManager::~EventManager() {
    std::cout<<"destructor EventManager\n";

}







