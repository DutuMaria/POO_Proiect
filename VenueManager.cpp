//
// Created by Maria Duțu on 15.03.2021.
//

#include "VenueManager.h"
#include <iostream>
#include <utility>

std::vector<std::shared_ptr<Venue>> VenueManager::getVenues() {
    return venues;
}

std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager) {
    os<<"venues:\n";
    for(auto &venue: venueManager.venues)
        os<<"\tName: "<<venue->getName()<<", capacity: "<<venue->getCapacity()<<", address: "<<venue->getLocation()<<"\n";
    os<<"\n";
    return os;
}

void VenueManager::addVenue(std::shared_ptr<Venue> &venue) {
    venues.push_back(venue);
    venuesCapacities.insert({venue->getCapacity(), venue});
}

void VenueManager::addUnavailableDate(std::shared_ptr<Venue> &venue, const std::string &date) {
    UnavailableDates[venue].insert(date);
}

VenueManager::~VenueManager() {
    std::cout << "destructor VenueManager\n";
}









