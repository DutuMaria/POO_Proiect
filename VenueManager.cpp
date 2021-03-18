//
// Created by Maria Duțu on 15.03.2021.
//

#include "VenueManager.h"
#include <iostream>

VenueManager::VenueManager(const std::string &name): name(name){}


std::string VenueManager::getName() {
    return name;
}

std::vector<Venue> VenueManager::getVenues() {
    return venues;
}

//std::string VenueManager::generateVenue(int capacity, std::string date) {
//    for(auto &venue: UnavailableDates){
//        for(int date = 0; date < UnavailableDates[1].size(); date ++)
//            if(venue[1] not in )
//    }
//    return std::string();
//}

std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager) {
    os<<"\nname: "<<venueManager.name<<", venues:\n";
    for(auto &venue: venueManager.venues)
        os<<"  "<<venue;
    os<<"\n";
    return os;
}

void VenueManager::addVenue(const Venue &venue) {
    venues.push_back(venue);

}

VenueManager::~VenueManager() {
    std::cout << "destructor VenueManager" + name + "\n";
}

