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
    std::vector<Event> events;

public:
    Participant(std::string _name, std::string _telephone, int _age);
    void setName(const std::string &_name);
    void setTelephone(const std::string &_telephone);
    void setAge(int _age);
    std::string getName()const;
    std::string getTelephone()const;
    int getAge()const;
    friend std::ostream &operator<<(std::ostream &os, const Participant &participant);
    virtual ~Participant();

};


#endif //POO_PROIECT_PARTICIPANT_H
