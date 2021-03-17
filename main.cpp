#include <iostream>
#include "Venue.h"
#include "VenueManager.h"
#include "Event.h"
#include "EventManager.h"
#include "Participant.h"
#include "Invitation.h"
#include "Organizator.h"
#include "VenueManager.h"
#include <chrono>

using namespace std;

int main(){
    Venue v1("name", "location", 100);
    VenueManager vm1("name");
//    Event e1("name", "date", "Venue");
//    EventManager em1("name");
    Participant p1("name", "telephone", 12);
//    Invitation i1("response, accepted, declined", "plus one -> bool");
//    Organizator o1("name", "contact list");


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