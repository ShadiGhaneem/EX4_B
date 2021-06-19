#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class FieldDoctor: public Player{
        public:
        FieldDoctor(Board& BOARD, City CITY): Player(BOARD, CITY){this->ROLE = "FieldDoctor";};
        Player& treat(City CITY) override;
    };
} 