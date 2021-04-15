//
// Created by Maria Duțu on 15.03.2021.
//

#include "VenueManager.h"
#include <iostream>
#include <utility>

std::vector<std::shared_ptr<Venue>> VenueManager::getVenues() {
    return elements;
}

std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager) {
    os<<"Venues:\n";
    for(auto &venue: venueManager.elements)
        os<<"\tName: "<<venue->getName()<<", address: "<<venue->getLocation()<<"\n";
    os<<"\n";
    return os;
}

void VenueManager::addVenue(const std::shared_ptr<Venue> &venue) {
    elements.push_back(venue);
}

void VenueManager::addUnavailableDate(const std::shared_ptr<Venue> &venue, const std::string &date) {
    UnavailableDates[venue].insert(date);
}

void VenueManager::verifyVenue(std::shared_ptr<Event> &_event) {
    if(UnavailableDates[_event->getVenue()].find(_event->getDate()) != UnavailableDates[_event->getVenue()].end())
       changeVenue(_event);  //  este indisponibila, deci trebuie schimbata
}
void VenueManager::changeVenue(std::shared_ptr<Event> &_event) {
    for (auto & [venue, dates] : UnavailableDates){
           if(UnavailableDates[venue].find(_event->getDate()) == UnavailableDates[venue].end())
               _event->setVenue(const_cast<std::shared_ptr <Venue> &>(venue));
                addUnavailableDate(const_cast<std::shared_ptr <Venue> &>(venue), _event->getDate()); //seteaza data ca indisponibila
           break;
       }
}

VenueManager::~VenueManager() {
    std::cout << "destructor VenueManager\n";
}











