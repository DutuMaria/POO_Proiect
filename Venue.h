//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_VENUE_H
#define POO_PROIECT_VENUE_H

#include <memory>
#include <string>
#include <vector>
#include <ostream>
#include <utility>


class Venue: public std::enable_shared_from_this<Venue>{
private:
    std::string name, location;

public:
    Venue(std::string _name, std:: string _location);
    Venue(const std::shared_ptr<Venue> &_venue);
    void setName(const std::string &_name);
    void setLocation(const std::string &_location);
    std::string getName()const;
    std::string getLocation()const;
    Venue &operator=(const std::shared_ptr<Venue> &_venue);
    friend std::ostream &operator<<(std::ostream &os, const Venue &venue);
    virtual ~Venue();


};


#endif //POO_PROIECT_VENUE_H
