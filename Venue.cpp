//
// Created by Maria Duțu on 15.03.2021.
//

#include "Venue.h"
#include <iostream>
#include <utility>


Venue::Venue(std::string _name, std::string _location): name(std::move(_name)), location(std::move(_location)){}

Venue::Venue(std::shared_ptr<Venue> &_venue): name(_venue->name), location(_venue->location){
    std::cout<<"cc Venue " + name + "\n";
}

void Venue::setName(const std::string &_name) {
    name = _name;
}

void Venue::setLocation(const std::string &_location) {
    location = _location;
}

std::string Venue::getName()const {
    return name;
}

std::string Venue::getLocation()const {
    return location;
}

Venue &Venue::operator=(std::shared_ptr<Venue> &venue) {
    if(shared_from_this() != venue) {
        name = venue->name;
        location = venue->location;

    }
    std::cout<<"op= venue "<<name<<"\n";
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Venue &venue) {
    os << "venue: " << venue.name << ", location: " <<venue.location<<"\n";
    return os;
}


Venue::~Venue() {
    std::cout << "destructor Venue " + name + "\n";

}









