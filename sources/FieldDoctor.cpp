#include "FieldDoctor.hpp"
using namespace std;
using namespace pandemic;

Player& FieldDoctor:: treat(City CITY) {
    if((city!=CITY&&!Board::IS_NI(city,CITY))||board[CITY] == 0)
    { 
        throw std::invalid_argument("!!!!");
    }
    if(board.DIS_CURE(Board::GET_COLOR(CITY))){
        board[CITY]=0;
        }
    else{
        board[CITY]--;
    }
    return *this;
}