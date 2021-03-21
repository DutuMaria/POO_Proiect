#include <iostream>
#include "Venue.h"
#include "VenueManager.h"
#include "Event.h"
#include "EventManager.h"
#include "Participant.h"
#include "Invitation.h"
#include "Organizer.h"
#include "VenueManager.h"
//#include <chrono>

using namespace std;

int main(){
    Venue v1("name1", "St. Soarelui, nr. 22", 500);
    Venue v2("name2", "St. Amurgului, nr.17", 1000);
    Venue v3("name3", "St. Morii, nr 19", 2000);
    VenueManager::getInstance().addVenue(v1);
    VenueManager::getInstance().addVenue(v2);
    VenueManager::getInstance().addVenue(v3);
    VenueManager::getInstance().addUnavailableDate(v1, "23/03/2021");
    VenueManager::getInstance().addUnavailableDate(v2, "23/03/2021");
//    operator<<(std::cout, v1);
    operator<<(std::cout, VenueManager::getInstance());

//    std::cout<<v1<<v2;
    Event e1("nunta", "20/03/2021", v1);
    Event e2("majorat", "25/03/2021", v2);
    Event e3("nunta2", "22/07/2021",  v2);
    EventManager::getInstance().addEvent(e1);
    EventManager::getInstance().addEvent(e2);
    EventManager::getInstance().addEvent(e3);
    operator<<(std::cout, EventManager::getInstance());

//    EventManager em1("name");
    Participant p1(17, "name", "telephone", 18);
//    Invitation i1("response, accepted, declined", "plus one -> bool");
    Organizer o1("name");

    operator<<(std::cout, e1);


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