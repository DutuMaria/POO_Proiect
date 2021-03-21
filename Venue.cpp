//
// Created by Maria Duțu on 15.03.2021.
//

#include "Venue.h"
#include <iostream>
#include <utility>


Venue::Venue(std::string _name, std::string _location, int _capacity): name(std::move(_name)), location(std::move(_location)), capacity(_capacity){}

Venue::Venue(const Venue &_venue): name(_venue.name), location(_venue.location),  capacity(_venue.capacity){
    std::cout<<"cc Venue " + name + "\n";
}

void Venue::setName(const std::string &_name) {
    name = _name;
}

void Venue::setLocation(const std::string &_location) {
    location = _location;
}

void Venue::setCapacity(int _capacity) {
    capacity = _capacity;
}

std::string Venue::getName()const {
    return name;
}

std::string Venue::getLocation()const {
    return location;
}

int Venue::getCapacity()const {
    return capacity;
}

Venue &Venue::operator=(const Venue &venue) {
    if(this != &venue) {
        name = venue.name;
        location = venue.location;
        capacity = venue.capacity;
    }
    std::cout<<"op= venue "<<name<<"\n";
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Venue &venue) {
    os << "venue: " << venue.name << ", location: " <<venue.location<<", capacity: "<<venue.capacity<<"\n";
    return os;
}


Venue::~Venue() {
    std::cout << "destructor Venue " + name + "\n";

}









