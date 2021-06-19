#include "Virologist.hpp"

using namespace std;
using namespace pandemic;

Player& Virologist:: treat(City CITY) {
    if((cards.count(CITY)==0 && CITY!=city)||board[CITY] == 0){throw invalid_argument("!!!!");}
    if(!board.DIS_CURE(Board::GET_COLOR(CITY)))
    {
        board[CITY]--;
        return *this;
    }
    board[CITY]=0;
    return *this;

}