#include "Player.hpp"

using namespace std;
using namespace pandemic;
const int N_M = 5;

Player& Player:: drive(City CITY){
    if(city == CITY||!Board::IS_NI(city, CITY)){
        throw invalid_argument("!!!!");
        }
    city=CITY;
    return *this;
}

Player& Player:: fly_direct(City CITY){
    if(city == CITY||cards.count(CITY) == 0){
        throw std::invalid_argument("!!!!");
    }

    city=CITY;
    cards.erase(CITY);
    return *this;
}

Player& Player::fly_charter(City CITY){
    if(city == CITY||cards.count(city)==0){
        throw invalid_argument("!!!!");
    }
    cards.erase(city);
    city=CITY;
    return *this;
}

Player& Player::fly_shuttle(City CITY){
    if((!(board.HAS_SATION(city) && board.HAS_SATION(CITY)))||city == CITY){
        throw invalid_argument("!!!!");
    }
    city=CITY;
    return *this;
}

Player& Player::build(){
    if(cards.count(city)==0){
        throw invalid_argument("!!!!");
    }
    if(board.HAS_SATION(city)){
        return *this;
    }
    board.ADD_STATION(city);
    cards.erase(city);
    return *this;
}

Player& Player:: discover_cure(Color COLOR){
    if(!board.DIS_CURE(COLOR)){
        if(!board.HAS_SATION(city)){
            throw invalid_argument("!!!!");
        }
        int C_N=0;
        for(const auto& card: cards){
            if(Board::GET_COLOR(card) == COLOR){
                C_N++;
            }
        }

        if(C_N < N_M){
            throw invalid_argument("!!!!");
        }
        auto it= cards.begin();
        while(it != cards.end()){
            if(Board::GET_COLOR(*it) != COLOR){ 
            it++;
            }
            else{
             it=cards.erase(it);
            }
            
        }
        board.ADD_CURE(COLOR);
    }
    return *this;
}

Player& Player:: treat(City CITY){
    if(city != CITY||board[CITY] == 0){ 
        throw invalid_argument("!!!!");
    }
    
    if(board.DIS_CURE(Board::GET_COLOR(CITY))){
        board[CITY]=0;
        return *this;
    }
    board[CITY]--;
    return *this;
}

Player& Player::take_card(City CITY){
    cards.insert(CITY);
    return *this;
}