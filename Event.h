//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_EVENT_H
#define POO_PROIECT_EVENT_H

#include <ostream>
#include <string>
#include "Venue.h"

class Event {
private:
    std::string name, date;
    Venue x;

public:
    // constructor
    Event(const std::string &name, const std::string &date, const Venue &x);
    friend std::ostream &operator<<(std::ostream &os, const Event &event);
    std::string getName();
    std::string getDate();


};


#endif //POO_PROIECT_EVENT_H
