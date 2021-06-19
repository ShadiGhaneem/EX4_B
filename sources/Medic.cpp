#include "Medic.hpp"

using namespace std;
using namespace pandemic;

Player& Medic::treat(City CITY) {
    if(city != CITY||board[CITY] == 0){ 
        throw invalid_argument("!!!!");
    }
    board[CITY]=0;
    return *this;
}
Player& Medic::drive(City CITY){
    Player::drive(CITY);
    if(board.DIS_CURE(Board::GET_COLOR(CITY))){board[CITY]=0;}
    return *this;

}
Player& Medic::fly_direct(City CITY) {
    Player::fly_direct(CITY);
    if(board.DIS_CURE(Board::GET_COLOR(CITY))){board[CITY]=0;}
    return *this;

}
Player& Medic::fly_charter(City CITY){
    Player::fly_charter(CITY);
    if(board.DIS_CURE(Board::GET_COLOR(CITY))){board[CITY]=0;}
    return *this;
}
Player& Medic::fly_shuttle(City CITY){
    Player::fly_shuttle(CITY);
    if(board.DIS_CURE(Board::GET_COLOR(CITY))){board[CITY]=0;}
    return *this;
}
