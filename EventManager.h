//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_EVENTMANAGER_H
#define POO_PROIECT_EVENTMANAGER_H

#include <ostream>
#include <string>


class EventManager {
private:
    std::string name;

public:
    explicit EventManager(const std::string &name);
    std::string getName();
    friend std::ostream &operator<<(std::ostream &os, const EventManager &eventManager);
    virtual ~EventManager();
};


#endif //POO_PROIECT_EVENTMANAGER_H
