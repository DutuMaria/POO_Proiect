#include <iostream>
#include "Venue.h"
#include "VenueManager.h"
#include "Event.h"
#include "EventManager.h"
#include "Participant.h"
#include "Invitation.h"
#include "Organizer.h"

using namespace std;

void verificare_si_adaugare(shared_ptr<Event> &ev) {
    try {
        VenueManager::instance().verifyVenue(ev);
        EventManager::instance().addEvent(ev);

    }
    catch (std::exception &err) {
        std::cout << "(in catch) " << err.what() << "\n";
    }
}


int main() {
    shared_ptr<Organizer> o1 = std::make_shared<Organizer>("Popescu Daniel");
    shared_ptr<Organizer> o2 = std::make_shared<Organizer>("Irimia Alina");

    Participant p1(1, "Popescu Alin", "telephone1", 18);
    Participant p2(2, "Burducea Maria", "telephone2", 24);
    Participant p3(3, "Constantinescu Cristina", "telephone3", 30);

    shared_ptr<Venue> v1 = std::make_shared<Venue>("venue1", "St. Soarelui, nr. 22");
    shared_ptr<Venue> v2 = std::make_shared<Venue>("venue2", "St. Amurgului, nr.17");
    shared_ptr<Venue> v3 = std::make_shared<Venue>("venue3", "St. Morii, nr 19");

    shared_ptr<Event> e1 = std::make_shared<Event>("nunta1", "23/03/2021", v1);
    shared_ptr<Event> e2 = std::make_shared<Event>("nunta2", "22/07/2021", v2);
    shared_ptr<Event> e3 = std::make_shared<Event>("nunta3", "22/07/2021", v2);   // o sa genereze alta locatie pt e3 pentru ca e la fel cu e2
    shared_ptr<Event> e4 = std::make_shared<Event>("nunta4", "20/04/2021", v3);
    shared_ptr<Event> e5 = std::make_shared<Event>("majorat", "05/06/2021", v3);

    Invitation i1(17);


    VenueManager::instance().addVenue(v1);
    VenueManager::instance().addVenue(v2);
    VenueManager::instance().addVenue(v3);

    cout << VenueManager::instance(); // afisarea locataiilor

    VenueManager::instance().addUnavailableDate(v1, "23/03/2021");
    VenueManager::instance().addUnavailableDate(v2, "20/03/2021");
    VenueManager::instance().addUnavailableDate(v3, "25/09/2021");

    VenueManager::instance().addUnavailableDate(v1, "05/06/2021");
    VenueManager::instance().addUnavailableDate(v2, "05/06/2021");
    VenueManager::instance().addUnavailableDate(v3, "05/06/2021");


    verificare_si_adaugare(e1);
    verificare_si_adaugare(e2);
    verificare_si_adaugare(e3);
    verificare_si_adaugare(e4);
    verificare_si_adaugare(e5); // pentru e5 intra pe catch pentru ca toate locatiile sunt ocupate pe data respectiva


    o1->organizeEvent(e1);
    o1->organizeEvent(e2);
    o2->organizeEvent(e3);
//    o2->organizeEvent(e4); //   pot sa nu setez organizatorul aici => am folosit optional in Event.h
    o2->organizeEvent(e5);


    cout << "\n";
    cout << o1;
    cout << o2;

    cout << EventManager::instance(); // afisarea evenimentelor

//    Invitation::sendInvitationAndGetResponse(p1, e1);



    return 0;
}
