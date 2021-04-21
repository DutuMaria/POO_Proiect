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

    shared_ptr<Participant> p1 = std::make_shared<Participant>(1, "Popescu Alin", "telephone1", 18);
    shared_ptr<Participant> p2 = std::make_shared<Participant>(2, "Burducea Maria", "telephone2", 24);
    shared_ptr<Participant> p3 = std::make_shared<Participant>(3, "Constantinescu Cristina", "telephone3", 30);

    shared_ptr<Venue> v1 = std::make_shared<Venue>("venue1", "St. Soarelui, nr. 22");
    shared_ptr<Venue> v2 = std::make_shared<Venue>("venue2", "St. Amurgului, nr.17");
    shared_ptr<Venue> v3 = std::make_shared<Venue>("venue3", "St. Morii, nr 19");

    shared_ptr<Event> e1 = std::make_shared<Event>("nunta1", "23/03/2021", v1);
    shared_ptr<Event> e2 = std::make_shared<Event>("nunta2", "22/07/2021", v2);
    shared_ptr<Event> e3 = std::make_shared<Event>("nunta3", "22/07/2021", v2);   // o sa genereze alta locatie pt e3 pentru ca e la fel cu e2
    shared_ptr<Event> e4 = std::make_shared<Event>("nunta4", "20/04/2021", v3);
    shared_ptr<Event> e5 = std::make_shared<Event>("majorat", "05/06/2021", v3);

    shared_ptr<Invitation> i1 = std::make_shared<Invitation>();
    shared_ptr<Invitation> i2 = std::make_shared<Invitation>();
    shared_ptr<Invitation> i3 = std::make_shared<Invitation>();
    shared_ptr<Invitation> i4 = std::make_shared<Invitation>();


    VenueManager::instance().addVenue(v1);
    VenueManager::instance().addVenue(v2);
    VenueManager::instance().addVenue(v3);

    cout << VenueManager::instance(); // afisarea locataiilor

//    VenueManager::instance().addUnavailableDate(v1, "23/03/2021");
//    VenueManager::instance().addUnavailableDate(v2, "20/03/2021");
//    VenueManager::instance().addUnavailableDate(v3, "25/09/2021");

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
//    o2->organizeEvent(e4); //   pot sa nu setez organizatorul aici (afisez alt mesaj) => am folosit optional in Event.h
    o2->organizeEvent(e5);


    cout << "\n";
    cout << o1;
    cout << o2;


    cout<<i3<<"\n";   //   invitatia nu a fost trimisa (afisez alt mesaj) => am folosit optional in Invitation.h

    o1->sendInvitation(i1, e2, p1);
    o1->sendInvitation(i2, e3, p1);
    o1->sendInvitation(i3, e1, p1);
    o1->sendInvitation(i4, e5, p1);

    cout<<i1<<"\n"; // o sa accepte invitatia pentru ca p1 este liber pe data evenimentului
    cout<<i2<<"\n"; // NU o sa accepte invitatia pentru ca p1  nu este liber pe data evenimentului
    cout<<i3<<"\n"; // o sa accepte invitatia pentru ca p1 este liber pe data evenimentului
    cout<<i4<<"\n"; // o sa accepte invitatia pentru ca p1 este liber pe data evenimentului

    cout<<p1<<"\n"; // afiseaza evenimentele la care participa p1

//    EventManager::instance().addParticipant(p1, e1);
//    cout<<EventManager::instance().nrOfParticipants(e1);

    cout<<EventManager::instance().status("23/03/2021", e1)<<"\n";
    cout<<EventManager::instance().status("24/03/2021", e1)<<"\n";
    cout<<VenueManager::instance().status("23/03/2021", v1)<<"\n";
    cout<<VenueManager::instance().status("24/03/2021", v1)<<"\n";


    cout <<"\n"<< EventManager::instance(); // afisarea evenimentelor

//  in EventManager mai trebuie modificata putin functia status
//  mai trebuie rezolvate functiile: addParticipant si nrOfParticipants in EventManager
//                                  + schimbare afisare
//                                  + modificare addParticipant in Participant.cpp
//                                  + modificare in Event la vectorul de participanti





    return 0;
}
