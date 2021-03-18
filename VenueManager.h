//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_VENUEMANAGER_H
#define POO_PROIECT_VENUEMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include "Venue.h"

class VenueManager {
private:
    std::string name;
    std::vector<Venue> venues;

public:
    explicit VenueManager(const std::string &name);
    std::string getName();
    std::vector<Venue> getVenues();
//    std::string generateVenue(int capacity, std::string date );
    void addVenue(const Venue &venue);
    friend std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager);
    virtual ~VenueManager();


};


#endif //POO_PROIECT_VENUEMANAGER_H
