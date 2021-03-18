//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include "EventManager.h"

EventManager::EventManager(const std::string &name): name(name) {}

std::string EventManager::getName() {
    return name;
}

std::ostream &operator<<(std::ostream &os, const EventManager &eventManager) {
    os<<"name: "<<eventManager.name<< "\n";
    return os;
}

EventManager::~EventManager() {
    std::cout<<"destructor EventManager " + name + "\n";

}
