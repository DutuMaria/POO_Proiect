//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_EVENT_H
#define POO_PROIECT_EVENT_H

#include <memory>
#include <ostream>
#include <string>
#include "Venue.h"
#include "Organizer.h"
#include <optional>

class Organizer;

class Event:  public std::enable_shared_from_this<Event> {
private:
    std::string name, date;
    std::shared_ptr<Venue> venue;
    std::optional<std::weak_ptr<Organizer>> organizer;

public:
    Event(std::string _name, std::string _date, std::shared_ptr<Venue>  &_venue);
    friend std::ostream &operator<<(std::ostream &os, std::shared_ptr<Event> &event);
    void setName(const std::string &_name);
    void setDate(const std::string &_date);
    void setVenue(std::shared_ptr<Venue> &_venue);
    void setOrganizer(std::weak_ptr <Organizer> _organizer);
    std::optional<std::weak_ptr<Organizer>> getOrganizer()const;
    std::string getName()const;
    std::string getDate()const;
    std::shared_ptr<Venue> getVenue()const;
    virtual ~Event();

};


#endif //POO_PROIECT_EVENT_H
