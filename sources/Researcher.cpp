#include "Researcher.hpp"

using namespace std;
using namespace pandemic;

const int N_M = 5;

Player& Researcher:: discover_cure(Color COLOR){
    if(!board.DIS_CURE(COLOR)){
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