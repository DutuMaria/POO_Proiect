//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_VENUEMANAGER_H
#define POO_PROIECT_VENUEMANAGER_H


#include <string>

class VenueManager {
private:
    std::string name;

public:
    explicit VenueManager(const std::string &name);
    virtual ~VenueManager();


};


#endif //POO_PROIECT_VENUEMANAGER_H
