#include <vector>
#include "kontynent.hpp"

class Kraj {};

class Planeta {
private:
    const std::vector<Kontynent> kontynenty;
    std::vector<Kraj> kraje;
    
    static int ile;

public:
    
    Planeta(std::vector<Kontynent> kontynenty);
    
    ~Planeta();

    static int get_ile();
};
