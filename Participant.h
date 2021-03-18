//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_PARTICIPANT_H
#define POO_PROIECT_PARTICIPANT_H

#include <iostream>
#include <vector>
#include <string>
#include "Event.h"

class Participant {
private:
    std::string name, telephone;
    int age;
    std::vector<Event> evenimente;

public:
    Participant(const std::string &name, const std::string &telephone, int age);
    std::string getName();
    std::string getTelephone();
    int getAge();
    friend std::ostream &operator<<(std::ostream &os, const Participant &participant);
    virtual ~Participant();

};


#endif //POO_PROIECT_PARTICIPANT_H
