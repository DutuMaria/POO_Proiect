//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_EVENTMANAGER_H
#define POO_PROIECT_EVENTMANAGER_H

#include <ostream>
#include <string>
#include "Event.h"
#include "VenueManager.h"


class EventManager {
private:
    EventManager(){};
    EventManager(EventManager const&);
    void operator=(EventManager const&);

    std::vector<std::shared_ptr<Event>> events;

public:
    static EventManager& getInstance(){
        static EventManager instance;
        return instance;
    }
    void addEvent(std::shared_ptr<Event> &event);
    bool verifyVenue(std::shared_ptr<Venue> &_venue);
    friend std::ostream &operator<<(std::ostream &os, const EventManager &eventManager);
    virtual ~EventManager();
};


#endif //POO_PROIECT_EVENTMANAGER_H
