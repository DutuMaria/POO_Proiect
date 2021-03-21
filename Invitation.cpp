//
// Created by Maria Duțu on 15.03.2021.
//

#include "Invitation.h"

std::string Invitation::response(bool ok) {
    if(ok)
        return "accepted\n";
    return "declined\n";
}

bool Invitation::plusOne(bool ok) {
    if(ok)
        return true;
    return false;
}



