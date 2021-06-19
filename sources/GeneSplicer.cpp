#include "GeneSplicer.hpp"
using namespace std;
using namespace pandemic;
const int NUM = 5;

Player& GeneSplicer:: discover_cure(Color COLOR) {
    if(!board.DIS_CURE(COLOR)){
        if((!board.HAS_SATION(city))||cards.size() < NUM){throw invalid_argument("!!!!");}
        auto itirat= cards.begin();
        while(itirat != cards.end()){ 
            itirat=cards.erase(itirat);
            itirat++; 
        }
        board.ADD_CURE(COLOR);
    }
    return *this;
}