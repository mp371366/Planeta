#include "planeta.hpp"

Planeta::Planeta(std::vector<Kontynent> kontynenty) : kontynenty(kontynenty) {
    std::cout << "k: " << typeid(*this).name() << std::endl;
    // Planeta::ile++;
}

Planeta::~Planeta() {
    std::cout << "d: " << typeid(*this).name() << std::endl;
    // Planeta::ile--;
}