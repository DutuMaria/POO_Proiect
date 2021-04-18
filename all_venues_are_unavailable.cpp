//
// Created by Maria Duțu on 18.04.2021.
//

#include "all_venues_are_unavailable.h"

all_venues_are_unavailable::all_venues_are_unavailable(std::shared_ptr<Event> &_event, const std::string &_date) noexcept: std::runtime_error("Evenimentul: " + _event->getName() + " - nu se poate organiza pentru ca toate locatiile sunt indisponibile pe " + _date + "!!"){}


