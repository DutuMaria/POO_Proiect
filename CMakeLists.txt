cmake_minimum_required(VERSION 3.17)
project(POO_Proiect)

set(CMAKE_CXX_STANDARD 20)

add_executable(POO_Proiect main.cpp Venue.cpp Venue.h Event.cpp Event.h EventManager.cpp EventManager.h Participant.cpp Participant.h Invitation.cpp Invitation.h Organizer.cpp Organizer.h VenueManager.cpp VenueManager.h)