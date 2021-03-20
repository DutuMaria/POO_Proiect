//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_ORGANIZER_H
#define POO_PROIECT_ORGANIZER_H

#include <ostream>
#include <string>

class Organizer {
private:
    std::string name;

public:
    explicit Organizer(std::string _name);
    void setName(const std::string &_name);
    std::string getName()const;
    friend std::ostream &operator<<(std::ostream &os, const Organizer &organizer);

};


#endif //POO_PROIECT_ORGANIZER_H
