#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class GeneSplicer: public Player{
        public:
        GeneSplicer(Board& BOARD, City CITY): Player(BOARD, CITY){this->ROLE = "GeneSplicer";};
        Player& discover_cure(Color COLOR) override;
    };
} 