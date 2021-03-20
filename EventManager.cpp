//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "EventManager.h"

EventManager::EventManager(std::string _name): name(std::move(_name)) {}

void EventManager::setName(const std::string &_name) {
    name = _name;
}

std::string EventManager::getName()const {
    return name;
}

std::ostream &operator<<(std::ostream &os, const EventManager &eventManager) {
    os<<"name: "<<eventManager.name<< "\n";
    return os;
}

EventManager::~EventManager() {
    std::cout<<"destructor EventManager " + name + "\n";

}





