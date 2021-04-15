//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include <utility>
#include "Event.h"


Event::Event(std::string _name, std::string _date, std::shared_ptr<Venue> &_venue): name(std::move(_name)), date(std::move(_date)), venue(_venue){}

void Event::setName(const std::string &_name) {
    name = _name;
}

void Event::setDate(const std::string &_date) {
    date = _date;
}

void Event::setVenue(std::shared_ptr<Venue> &_venue) {
    venue = _venue;
}

void Event::setOrganizer(std::weak_ptr <Organizer> _organizer) {
    organizer = std::move(_organizer);
}

std::string Event::getName()const {
    return name;
}

std::string Event::getDate()const {
    return date;
}

std::shared_ptr<Venue> Event::getVenue() const {
    return venue;
}

std::weak_ptr<Organizer> Event::getOrganizer()const {
    return organizer;
}

std::ostream &operator<<(std::ostream &os, std::shared_ptr<Event> &event) {
    os<< "event: "<<event->getName()<<" "<<event->getDate()<<"\n"<<"\t"<<event->getVenue()->getName()<<"\n";
    os<<"\n";
    return os;
}


















