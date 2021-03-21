//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_ORGANIZER_H
#define POO_PROIECT_ORGANIZER_H

#include <ostream>
#include <string>
#include <unordered_set>
#include "Event.h"
#include <optional>



class Organizer: public std::enable_shared_from_this<Venue> {
private:
    std::string name;
    std::unordered_set<std::shared_ptr<Event>> events;

public:
    explicit Organizer(std::string _name);
    void setName(const std::string &_name);
    void organizeEvent(std::shared_ptr<Event> &event);
    std::string getName()const;
    friend std::ostream &operator<<(std::ostream &os, const Organizer &organizer);
    virtual ~Organizer();
};


#endif //POO_PROIECT_ORGANIZER_H
