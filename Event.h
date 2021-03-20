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
    Venue venue;

public:
    // constructor
    Event(std::string _name, std::string _date, const Venue &_venue);
    friend std::ostream &operator<<(std::ostream &os, const Event &event);
    void setName(const std::string &_name);
    void setDate(const std::string &_date);
    void setVenue(const Venue &_venue);
    std::string getName()const;
    std::string getDate()const;


};


#endif //POO_PROIECT_EVENT_H
