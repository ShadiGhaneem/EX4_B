#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Researcher: public Player{
        public:
        Researcher(Board& BOARD, City CITY): Player(BOARD, CITY){this->ROLE = "Researcher";};
        Player& discover_cure(Color COLOR) override;
    };
} 