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
#include <set>
#include <unordered_map>
#include "Venue.h"

class VenueManager: public std::enable_shared_from_this<Venue>{
private:
    VenueManager(){};
    VenueManager(VenueManager const&);
    void operator=(VenueManager const&)const;

    std::vector<std::shared_ptr<Venue>> venues;
    std::unordered_map<std::shared_ptr<Venue>, std::unordered_set<std::string>> UnavailableDates;
    std::set<std::pair<int, std::shared_ptr<Venue>>> venuesCapacities;

public:
    static VenueManager& getInstance(){
        static VenueManager instance;
        return instance;
    }

    std::vector<std::shared_ptr<Venue>> getVenues();
    void addVenue(std::shared_ptr<Venue> &venue);
    void addUnavailableDate(std::shared_ptr<Venue>& venue, const std::string &date);
    friend std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager);
    virtual ~VenueManager();


};


#endif //POO_PROIECT_VENUEMANAGER_H
