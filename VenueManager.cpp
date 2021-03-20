//
// Created by Maria Duțu on 15.03.2021.
//

#include "VenueManager.h"
#include <iostream>
#include <utility>

VenueManager::VenueManager(std::string _name): name(std::move(_name)){}

void VenueManager::setName(const std::string &_name) {
    name = _name;
}

std::string VenueManager::getName()const {
    return name;
}

std::vector<Venue> VenueManager::getVenues() {
    return venues;
}

std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager) {
    os<<"\nname: "<<venueManager.name<<", venues:\n";
    for(auto &venue: venueManager.venues)
        os<<"\t"<<venue;
    os<<"\n";
    return os;
}

void VenueManager::addVenue(const Venue &venue) {
    venues.push_back(venue);

}

void VenueManager::addUnavailableDate(const Venue &venue, std::string &date) {
    UnavailableDates[shared_from_this()].insert(date);
}

VenueManager::~VenueManager() {
    std::cout << "destructor VenueManager" + name + "\n";
}





