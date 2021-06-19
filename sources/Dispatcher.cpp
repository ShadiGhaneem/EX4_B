#include "Dispatcher.hpp"

using namespace std;
using namespace pandemic;

Player& Dispatcher:: fly_direct(City CITY){
    if(city == CITY){
        throw invalid_argument{"!!!"};
    }
    if(!board.HAS_SATION(city)){
         return Player:: fly_direct(CITY);
    }
        this->city=CITY;
        return *this;
}
