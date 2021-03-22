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
        os<<"\tName: "<<venue->getName()<<", address: "<<venue->getLocation()<<"\n";
    os<<"\n";
    return os;
}

void VenueManager::addVenue(std::shared_ptr<Venue> &venue) {
    venues.push_back(venue);
}

void VenueManager::addUnavailableDate(std::shared_ptr<Venue> &venue, const std::string &date) {
    UnavailableDates[venue].insert(date);
}

void VenueManager::verifyVenue(std::shared_ptr<Event> &_event) {
    if(UnavailableDates[_event->getVenue()].find(_event->getDate()) != UnavailableDates[_event->getVenue()].end())
       changeVenue(_event);  //  este indisponibila, deci trebuie schimbata
}
void VenueManager::changeVenue(std::shared_ptr<Event> &_event) {
       for (auto & UnavailableDate : UnavailableDates){
           if(UnavailableDates[UnavailableDate.first].find(_event->getDate()) == UnavailableDates[UnavailableDate.first].end())
               _event->setVenue(const_cast<std::shared_ptr <Venue> &>(UnavailableDate.first));
                addUnavailableDate(const_cast<std::shared_ptr <Venue> &>(UnavailableDate.first), _event->getDate()); //seteaza data ca indisponibila
           break;
       }
}

VenueManager::~VenueManager() {
    std::cout << "destructor VenueManager\n";
}











