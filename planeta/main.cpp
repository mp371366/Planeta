#include "planeta.hpp"
#include <iostream>

int main() {
    std::vector<Kontynent> kontynenty;
    
    std::cout << Planeta::get_ile() << std::endl;
    
    Planeta* p3 = new Planeta(kontynenty);
    
    std::cout << Planeta::get_ile() << std::endl;
    
    Planeta p1(kontynenty);
    
    std::cout << Planeta::get_ile() << std::endl;
    
    {
        Planeta p2(std::vector<Kontynent>());
        std::cout << Planeta::get_ile() << std::endl;
    }
    
    
    std::cout << Planeta::get_ile() << std::endl;
    
    delete p3;
    
    std::cout << Planeta::get_ile() << std::endl;
}
