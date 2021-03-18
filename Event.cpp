//
// Created by Maria Duțu on 15.03.2021.
//

#include <iostream>
#include "Event.h"


//Event::Event(const std::string &name, const std::string &date, const Venue &x) {

//}

std::string Event::getName() {
    return name;
}

std::string Event::getDate() {
    return std::string();
}

//std::ostream &operator<<(std::ostream &os, const Event &event) {
//    os<< "nume: "<<event.name<<" "<<event.date<<" "<<event.Venue<<"\n";  // cum afisez si obiectul de tip Venue asociat Event-ului?
//    return os;
//}
