#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"

namespace pandemic{

    class Scientist: public Player{
        int NUM;
        public:
        Scientist(Board& BOARD, City COLOR, int NUM): Player(BOARD, COLOR), NUM(NUM){this->ROLE = "Scientist";};
        Player& discover_cure(Color COLOR) override;
    };
} 