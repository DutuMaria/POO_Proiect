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
    shared_ptr<Venue> v1 = std::make_shared<Venue>("venue1", "St. Soarelui, nr. 22", 500);
    shared_ptr<Venue> v2 = std::make_shared<Venue>("venue2", "St. Amurgului, nr.17", 1000);
    shared_ptr<Venue> v3 = std::make_shared<Venue>("venue3", "St. Morii, nr 19", 2000);
    VenueManager::getInstance().addVenue(v1);
    VenueManager::getInstance().addVenue(v2);
    VenueManager::getInstance().addVenue(v3);
    VenueManager::getInstance().addUnavailableDate(v1, "23/03/2021");
    VenueManager::getInstance().addUnavailableDate(v2, "20/03/2021");
//    operator<<(std::cout, v1);
    operator<<(std::cout, VenueManager::getInstance());

//    std::cout<<v1<<v2;

    shared_ptr<Event> e1 = std::make_shared<Event>("nunta1", "20/03/2021", v1);
    shared_ptr<Event> e2 = std::make_shared<Event>("nunta2", "22/07/2021", v2);
    shared_ptr<Event> e3 = std::make_shared<Event>("nunta3", "25/03/2021", v2);
    shared_ptr<Event> e4 = std::make_shared<Event>("nunta4", "20/04/2021", v3);
//    operator<<(std::cout, e1);
    EventManager::getInstance().addEvent(e1);
    EventManager::getInstance().addEvent(e2);
    EventManager::getInstance().addEvent(e3);
    operator<<(std::cout, EventManager::getInstance());

//    EventManager em1("name");
    Participant p1(17, "name", "telephone", 18);
    Organizer o1("Popescu Daniel");
    Organizer o2("Irimia Alina");
    o1.organizeEvent(e1);
    o1.organizeEvent(e2);
    o2.organizeEvent(e3);
    operator<<(std::cout, o1);
    operator<<(std::cout, o2);
    Invitation i1(17);
//    Invitation::sendInvitationAndGetResponse(p1, e1);
//    operator<<(std::cout, i1);




//    constexpr auto ymd {std::chrono::July/1/2021};
//    std::cout << (ymd.year() == std::chrono::year(2021)) << ' ';
//    std::cout << (ymd.month() == std::chrono::month(7)) << ' ';
//    std::cout << (ymd.day() == std::chrono::day(1)) << '\n';

//    template< class CharT, class Traits >
//    std::basic_ostream<CharT, Traits>&
//    operator<<(std::basic_ostream<CharT, Traits>& os, const std::chrono::year_month_day& ymd);
//    return os << (ymd.ok() ?
//                  std::format(os.getloc(), STATICALLY_WIDEN<CharT>("{:%F}"), ymd) :
//                  std::format(os.getloc(), STATICALLY_WIDEN<CharT>("{:%F} is not a valid date"), ymd));

    return 0;
}