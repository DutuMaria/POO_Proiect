//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_EVENTMANAGER_H
#define POO_PROIECT_EVENTMANAGER_H

#include <memory>
#include <iostream>
#include <vector>
#include <string>
#include "Event.h"
#include "Manager.h"

class EventManager: public Manager<EventManager, Event> {
public:
    std::vector<std::shared_ptr<Event>> getEvents();
    void addEvent(const std::shared_ptr<Event> &event);
//    void addParticipant(const std::weak_ptr<Participant> &participant, const std::shared_ptr<Event> &event);
//    int nrOfParticipants(const std::shared_ptr<Event> &event);
    friend std::ostream &operator<<(std::ostream &os, const EventManager &eventManager);
    ~EventManager() override;

};


#endif //POO_PROIECT_EVENTMANAGER_H
