#include <vector>
#include "kontynent.hpp"
#include <iostream>
#include <typeinfo>

class Kraj {};

class Planeta {
private:
    const std::vector<Kontynent> kontynenty;
    std::vector<Kraj> kraje;
    
public:
    
    // static int ile;
    
    Planeta(std::vector<Kontynent> kontynenty);
    
    ~Planeta();
    /*
    static void set_ile() {
        Planeta::ile = 0;
    }
    
    static int get_ile() {
        return Planeta::ile;
    }
    */
};