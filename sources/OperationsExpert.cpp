#include "OperationsExpert.hpp"

using namespace std;
using namespace pandemic;

Player& OperationsExpert:: build(){
    board.ADD_STATION(city);
    return *this;
}