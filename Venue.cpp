//
// Created by Maria Duțu on 15.03.2021.
//

#include "Venue.h"
#include <iostream>


Venue::Venue(const std::string &name, const std::string &location, int capacity): name(name), location(location), capacity(capacity){}

Venue::Venue(const Venue &ob): name(ob.name), location(ob.location),  capacity(ob.capacity){
    std::cout<<"cc Venue " + name + "\n";
}

std::string Venue::getName() {
    return name;
}

std::string Venue::getLocation() {
    return location;
}

int Venue::getCapacity() {
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
    os << "name: " << venue.name << ", location: " <<venue.location<<", capacity: "<<venue.capacity<<"\n";
    return os;
}


Venue::~Venue() {
    std::cout << "destructor Venue " + name + "\n";

}





