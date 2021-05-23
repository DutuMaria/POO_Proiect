//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_VENUEMANAGER_H
#define POO_PROIECT_VENUEMANAGER_H

#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include "Venue.h"
#include "Event.h"
#include "Manager.h"

class VenueManager: public Manager<VenueManager, Venue> {
private:
    std::unordered_map<std::shared_ptr<Venue>, std::unordered_set<std::string>> UnavailableDates;

public:
    std::vector<std::shared_ptr<Venue>> getVenues();
    void addVenue(const std::shared_ptr<Venue> &venue);
    void addUnavailableDate(const std::shared_ptr<Venue>& venue, const std::string &date);
    void verifyVenue(std::shared_ptr<Event> &_event);
    void changeVenue(std::shared_ptr<Event> &_event);
    std::string status(const std::string &date,  std::shared_ptr<Venue> &venue)  override ;
    friend std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager);
    ~VenueManager() override;

};


#endif //POO_PROIECT_VENUEMANAGER_H
