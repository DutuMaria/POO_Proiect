//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_INVITATION_H
#define POO_PROIECT_INVITATION_H


#include <string>
#include "Participant.h"
#include "Event.h"
#include "Participant.h"
#include <optional>

class Participant;
class Event;

class Invitation: public std::enable_shared_from_this<Invitation>  {
    std::optional<bool> response;
    std::optional<std::shared_ptr<Event>> event;
    std::optional<std::shared_ptr<Participant>> participant;

public:
    Invitation();
//    Invitation(std::shared_ptr<Event> _event, std::shared_ptr<Participant> _participant);
    void setResponse(bool _response);
    void setParticipant(std::shared_ptr<Participant> _participant);
    void setEvent(std::shared_ptr<Event> _event);
    std::optional<std::shared_ptr<Event>> getEvent() const;
    std::optional<std::shared_ptr<Participant>> getParticipant() const;
    std::optional<bool> getResponse()const;
    friend std::ostream &operator<<(std::ostream &os, const std::shared_ptr<Invitation> &invitation);
    virtual ~Invitation();


};


#endif //POO_PROIECT_INVITATION_H
