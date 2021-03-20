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
    explicit EventManager(std::string _name);
    void setName(const std::string &_name);
    std::string getName()const;
    friend std::ostream &operator<<(std::ostream &os, const EventManager &eventManager);
    virtual ~EventManager();
};


#endif //POO_PROIECT_EVENTMANAGER_H
