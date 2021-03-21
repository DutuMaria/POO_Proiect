//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_VENUE_H
#define POO_PROIECT_VENUE_H

#include <string>
#include <vector>
#include <ostream>
//#include <chrono>
#include <utility>


class Venue: public std::enable_shared_from_this<Venue>{
private:
    std::string name, location;
    int capacity;


public:
    Venue(std::string _name, std:: string _location, int _capacity);
    Venue(std::shared_ptr<Venue> &_venue);
    void setName(const std::string &_name);
    void setLocation(const std::string &_location);
    void setCapacity(int _capacity);
    std::string getName()const;
    std::string getLocation()const;
    int getCapacity()const;
    Venue &operator=(std::shared_ptr<Venue> &_venue);
    friend std::ostream &operator<<(std::ostream &os, const Venue &venue);
    virtual ~Venue();


};


#endif //POO_PROIECT_VENUE_H
