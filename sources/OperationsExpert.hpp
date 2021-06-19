#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class OperationsExpert: public Player{
        public:
        OperationsExpert(Board& BOARD, City CITY): Player(BOARD, CITY){this->ROLE = "OperationsExpert";};
        Player& build() override;
    };
} 
