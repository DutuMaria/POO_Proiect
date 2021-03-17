//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_VENUE_H
#define POO_PROIECT_VENUE_H

#include <string>
#include <vector>
#include <chrono>
#include <utility>
#include <unordered_map>

class Venue {
private:
    std::string name, location;
    int capacity;
    std::unordered_map<std::string, std::vector<std::string>> UnavailableDates;

public:
    Venue(const std::string &name, const std:: string &location, int capacity);
    std::string generateVenue(int capacity, std::string date );
    virtual ~Venue();


};


#endif //POO_PROIECT_VENUE_H
