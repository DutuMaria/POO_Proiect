//
// Created by Maria Duțu on 15.03.2021.
//

#include "VenueManager.h"
#include <iostream>

VenueManager::VenueManager(const std::string &name) {

}

VenueManager::~VenueManager() {
    std::cout << "destructor VenueManager" + name + "\n";
}
