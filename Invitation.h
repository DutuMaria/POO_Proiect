//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_INVITATION_H
#define POO_PROIECT_INVITATION_H

#include <string>
#include "Participant.h"

class Invitation {
    int id;
    bool response;
public:
    Invitation(int _id);
    //static void sendInvitationAndGetResponse(const Participant &participant, const Event &event);
    //friend std::ostream &operator<<(std::ostream &os, const Invitation &invitation);
    virtual ~Invitation();

};


#endif //POO_PROIECT_INVITATION_H
