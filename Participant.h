//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_PARTICIPANT_H
#define POO_PROIECT_PARTICIPANT_H

#include <memory>
#include <iostream>
#include <unordered_map>
#include <string>
#include "Event.h"
#include "Invitation.h"

class Event;
class Invitation;

class Participant: public std::enable_shared_from_this<Participant>{
private:
    std::string name, telephone;
    std::string response;
    int id, age;
    std::unordered_map<std::string, std::shared_ptr<Event>>  EventsProgram;

public:
    Participant(int _id, std::string  _name, std::string  _telephone, int _age, std::string& _response = (std::string &) "pending");
    void setName(const std::string &_name);
    void setTelephone(const std::string &_telephone);
    void setAge(int _age);
    std::string getName()const;
    std::string getTelephone()const;
    int getAge()const;

    void receiveInvitation_and_respond(const std::shared_ptr<Invitation> &invitation, const std::shared_ptr<Event> &event);
    friend std::ostream &operator<<(std::ostream &os, const std::shared_ptr<Participant> &participant);
    virtual ~Participant();

};


#endif //POO_PROIECT_PARTICIPANT_H
