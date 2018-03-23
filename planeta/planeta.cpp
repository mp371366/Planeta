#include "planeta.hpp"
#include <iostream>
#include <typeinfo>
#include "err.hpp"

int Planeta::ile = 0;

Planeta::Planeta(std::vector<Kontynent> kontynenty) : kontynenty(kontynenty) {
    ++Planeta::ile;

    if (debug) {
        std::cout << "constructor: " << typeid(*this).name() << " " <<
            Planeta::ile << std::endl;
    }
}

Planeta::~Planeta() {
    --Planeta::ile;

    if (debug) {
        std::cout << "constructor: " << typeid(*this).name() << " " <<
            Planeta::ile << std::endl;
    }
}

int Planeta::get_ile() {
    return Planeta::ile;
}
