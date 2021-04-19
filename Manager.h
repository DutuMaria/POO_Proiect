//
// Created by Maria Duțu on 04.04.2021.
//

#ifndef POO_PROIECT_MANAGER_H
#define POO_PROIECT_MANAGER_H

#include <memory>
#include <iostream>
#include <string>
#include <vector>

template<typename M, typename T> class Manager {

protected:
    Manager()= default;;
    std::vector<std::shared_ptr<T>> elements;

public:
    static M& instance(){
        static M instance;
        return instance;
    }

//    virtual  // trebuie sa fac o functie pur virtuala!
    virtual ~Manager<M, T>();
};

template<typename M, typename T>
Manager<M, T>::~Manager<M, T>() = default;


//Manager()= default;;
//explicit Manager(M const&);
//void operator=(M const&);

//static M& getInstance(){
//    static M instance;
//    return instance;
//}

#endif //POO_PROIECT_MANAGER_H
