//
// Created by Maria Duțu on 15.03.2021.
//

#ifndef POO_PROIECT_INVITATION_H
#define POO_PROIECT_INVITATION_H

#include <string>

class Invitation {
private:
    Invitation()= default;;
public:
    static Invitation& getInstance();
    std::string response(bool ok);
    bool plusOne(bool ok);

};


#endif //POO_PROIECT_INVITATION_H
