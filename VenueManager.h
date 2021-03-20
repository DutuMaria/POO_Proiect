//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_VENUEMANAGER_H
#define POO_PROIECT_VENUEMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include "Venue.h"

class VenueManager {
private:
    std::string name;
    std::vector<Venue> venues;
//    std::unordered_map<Venue, std::unordered_set<std::string>> UnavailableDates;
//    std::unordered_map<int, std::vector<Venue>> capacities;

public:
    explicit VenueManager(std::string _name);
    void setName(const std::string &_name);
    std::string getName()const;
    std::vector<Venue> getVenues();
//    std::string generateVenue(int capacity, std::string date );
    void addVenue(const Venue &venue);
//    void addUnavailableDate(const Venue &venue, std::string &date);
    friend std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager);
    virtual ~VenueManager();


};


#endif //POO_PROIECT_VENUEMANAGER_H
