//
// Created by Maria Duțu on 18.04.2021.
//

#ifndef POO_PROIECT_ALL_VENUES_ARE_UNAVAILABLE_H
#define POO_PROIECT_ALL_VENUES_ARE_UNAVAILABLE_H


#include <string>
#include <stdexcept>
#include "Event.h"


class all_venues_are_unavailable: public std::runtime_error {
public:
    explicit all_venues_are_unavailable(std::shared_ptr<Event> &_event, const std::string &_date) noexcept;


};


#endif //POO_PROIECT_ALL_VENUES_ARE_UNAVAILABLE_H
