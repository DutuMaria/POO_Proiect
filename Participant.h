//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_PARTICIPANT_H
#define POO_PROIECT_PARTICIPANT_H

#include <iostream>
#include <vector>
#include <string>
//#include "Event.h"

class Participant {
private:
    std::string name, telephone;
    static std::string response;
    int id, age;
//    std::vector<Event> events;

public:
    Participant(int _id, std::string  _name, std::string  _telephone, int _age, std::string& _response = (std::string &) "pending");
    void setName(const std::string &_name);
    void setTelephone(const std::string &_telephone);
    void setAge(int _age);
    std::string getName()const;
    std::string getTelephone()const;
    int getAge()const;
//    static bool sendResponse(const Participant &participant, const Event &event);
//    static bool plusOne(bool ok);
    friend std::ostream &operator<<(std::ostream &os, const Participant &participant);
    virtual ~Participant();

};


#endif //POO_PROIECT_PARTICIPANT_H
