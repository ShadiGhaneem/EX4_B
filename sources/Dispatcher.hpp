#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Dispatcher: public Player{
        public:
        Dispatcher(Board& BOARD, City CITY): Player(BOARD, CITY){this->ROLE = "Dispatcher";};
        Player& fly_direct(City CITY) override;
    };
} 
