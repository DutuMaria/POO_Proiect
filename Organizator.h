//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_ORGANIZATOR_H
#define POO_PROIECT_ORGANIZATOR_H

#include <ostream>
#include <string>

class Organizator {
private:
    std::string name;

public:
    explicit Organizator(const std::string &name);
    std::string getName();
    friend std::ostream &operator<<(std::ostream &os, const Organizator &organizator);

};


#endif //POO_PROIECT_ORGANIZATOR_H
