//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_EVENTMANAGER_H
#define POO_PROIECT_EVENTMANAGER_H

#include <ostream>
#include <string>
#include "Event.h"


class EventManager {
private:
//    std::string name;
    EventManager(){};
    EventManager(EventManager const&);
    void operator=(EventManager const&);

    std::vector<Event> events;

public:
    static EventManager& getInstance(){
        static EventManager instance;
        return instance;
    }
//    explicit EventManager(std::string _name);
//    void setName(const std::string &_name);
//    std::string getName()const;
    void addEvent(const Event &event);
    friend std::ostream &operator<<(std::ostream &os, const EventManager &eventManager);
    virtual ~EventManager();
};


#endif //POO_PROIECT_EVENTMANAGER_H
