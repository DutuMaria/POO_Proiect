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

class VenueManager: public std::enable_shared_from_this<Venue>{
private:
    VenueManager(){};

    VenueManager(VenueManager const&);

    void operator=(VenueManager const&)const;

//    std::string name;
    std::vector<Venue> venues;
    std::unordered_map<std::shared_ptr<Venue>, std::unordered_set<std::string>> UnavailableDates;
    std::unordered_map<int, std::vector<std::shared_ptr<Venue>>> capacities;

public:
    static VenueManager& getInstance(){
        static VenueManager instance;
        return instance;
    }
    //explicit VenueManager(std::string _name);
    //void setName(const std::string &_name);
    //std::string getName()const;
    std::vector<Venue> getVenues();
//    std::string generateVenue(int capacity, std::string date );
    void addVenue(const Venue &venue);
    void addUnavailableDate(const Venue &venue, const std::string &date);
    friend std::ostream &operator<<(std::ostream &os, const VenueManager &venueManager);
    virtual ~VenueManager();


};


#endif //POO_PROIECT_VENUEMANAGER_H
