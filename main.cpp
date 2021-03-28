#include <iostream>
#include "Venue.h"
#include "VenueManager.h"
#include "Event.h"
#include "EventManager.h"
#include "Participant.h"
#include "Invitation.h"
#include "Organizer.h"
//#include <chrono>

using namespace std;

int main(){
    shared_ptr<Venue> v1 = std::make_shared<Venue>("venue1", "St. Soarelui, nr. 22");
    shared_ptr<Venue> v2 = std::make_shared<Venue>("venue2", "St. Amurgului, nr.17");
    shared_ptr<Venue> v3 = std::make_shared<Venue>("venue3", "St. Morii, nr 19");

    VenueManager::getInstance().addVenue(v1);
    VenueManager::getInstance().addVenue(v2);
    VenueManager::getInstance().addVenue(v3);

    cout<<VenueManager::getInstance();


    VenueManager::getInstance().addUnavailableDate(v1, "23/03/2021");
    VenueManager::getInstance().addUnavailableDate(v2, "20/03/2021");
    VenueManager::getInstance().addUnavailableDate(v3, "25/09/2021");

    shared_ptr<Event> e1 = std::make_shared<Event>("nunta1", "23/03/2021", v1);
    shared_ptr<Event> e2 = std::make_shared<Event>("nunta2", "22/07/2021", v2);
    shared_ptr<Event> e3 = std::make_shared<Event>("nunta3", "25/03/2021", v2);
    shared_ptr<Event> e4 = std::make_shared<Event>("nunta4", "20/04/2021", v3);

    EventManager::getInstance().addEvent(e1);
    EventManager::getInstance().addEvent(e2);
    EventManager::getInstance().addEvent(e3);
    EventManager::getInstance().addEvent(e4);

    VenueManager::getInstance().verifyVenue(e1);
    VenueManager::getInstance().verifyVenue(e2);
    VenueManager::getInstance().verifyVenue(e3);
    VenueManager::getInstance().verifyVenue(e4);



    Participant p1(1, "Popescu Alin", "telephone1", 18);
    Participant p2(2, "Burducea Maria", "telephone2", 24);
    Participant p3(3, "Constantinescu Cristina", "telephone3", 30);

    shared_ptr<Organizer> o1 = std::make_shared<Organizer>("Popescu Daniel");
    shared_ptr<Organizer> o2 = std::make_shared<Organizer>("Irimia Alina");
    o1->organizeEvent(e1);
    o1->organizeEvent(e2);
    o2->organizeEvent(e3);
    o2->organizeEvent(e4);

    cout<<o1;
    cout<<o2;

    cout<<EventManager::getInstance();


    Invitation i1(17);
//    Invitation::sendInvitationAndGetResponse(p1, e1);
//    cout<<i1



    return 0;
}