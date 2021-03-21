//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "Event.h"

Event::Event(std::string _name, std::string _date, std::shared_ptr<Venue> &_venue): name(std::move(_name)), date(std::move(_date)), venue(_venue) {}
//Event::Event(std::string _name, std::string _date, const Venue &_venue, const Organizer &_organizer): name(std::move(_name)), date(std::move(_date)),venue(_venue), organizer(std::move(_organizer)){}

void Event::setName(const std::string &_name) {
    name = _name;
}

void Event::setDate(const std::string &_date) {
    date = _date;
}

void Event::setVenue(std::shared_ptr<Venue> &_venue) {
    venue = _venue;
}

//void Event::setOrganizer(const Organizer &_organizer) {
//    organizer = _organizer;
//}

std::string Event::getName()const {
    return name;
}

std::string Event::getDate()const {
    return date;
}

std::shared_ptr<Venue> Event::getVenue() const {
    return venue;
}

//Organizer Event::getOrganizer(const Organizer &_organizer) const {
//    return _organizer;
//}

std::ostream &operator<<(std::ostream &os, const Event &event) {
    os<< "event: "<<event.name<<" "<<event.date<<"\n"<<"\t"<<event.venue<<"\n";
    os<<"\n";
    return os;
}


















