//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_PARTICIPANT_H
#define POO_PROIECT_PARTICIPANT_H

#include <string>

class Participant {
private:
    std::string name, telephone;
    int age;

public:
    Participant(const std::string &name, const std::string &telephone, int age);
    virtual ~Participant();

};


#endif //POO_PROIECT_PARTICIPANT_H
