#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Medic: public Player{
        public:
        Medic(Board& BOARD, City CITY): Player(BOARD, CITY){this->ROLE = "Medic";};
        Player& treat(City CITY) override;
        Player& drive(City CITY) override;
        Player& fly_direct(City CITY) override;
        Player& fly_charter(City CITY) override;
        Player& fly_shuttle(City CITY) override;
    };
} 