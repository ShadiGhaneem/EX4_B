#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Virologist: public Player{
        public:
        Virologist(Board& BOARD, City CITY): Player(BOARD, CITY){this->ROLE = "Virologist";};
        Player& treat(City CITY) override;
    };
} 