//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "Event.h"


Event::Event(std::string _name, std::string _date, const Venue &_venue): name(std::move(_name)), date(std::move(_date)),venue(_venue){}

void Event::setName(const std::string &_name) {
    name = _name;
}

void Event::setDate(const std::string &_date) {
    date = _date;
}

void Event::setVenue(const Venue &_venue) {
    venue = _venue;

}

std::string Event::getName()const {
    return name;
}

std::string Event::getDate()const {
    return std::string();
}


std::ostream &operator<<(std::ostream &os, const Event &event) {
    os<< "event: "<<event.name<<" "<<event.date<<"\n"<<"\t"<<event.venue<<"\n";
    return os;
}








