//
// Created by Maria Duțu on 15.03.2021.
//

#include "Venue.h"
#include <iostream>


Venue::Venue(const std::string &name, const std::string &location, int capacity) {
    this->name = name;
    this->location = location;
    this->capacity = capacity;


}


Venue::~Venue() {
    std::cout << "destructor Venue" + name + "\n";

}

std::string Venue::generateVenue(int capacity, std::string date) {
    for(auto &venue: UnavailableDates){
        for(int date = 0; date < UnavailableDates[1].size(); date ++)
        if(venue[1] not in )
    }
    return std::string();
}


