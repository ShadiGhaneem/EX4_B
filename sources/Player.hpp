#pragma once
#include "Board.hpp"
#include "City.hpp"
#include <set>
#include<map>
using namespace std;

namespace pandemic{
    class Player{
       
        protected:
            Board& board;
            City city;
            set<City> cards;
            string ROLE;

        public:
            Player(Board& BOARD, City CITY): board(BOARD), city(CITY){}

            virtual Player& drive(City CITY);
            virtual Player& fly_direct(City CITY);
            virtual Player& fly_charter(City CITY);
            virtual Player& fly_shuttle(City CITY);
            virtual Player& build();
            virtual Player& discover_cure(Color COLOR);
            virtual Player& treat(City CITY);
            std::string role(){return ROLE;}
            Player& take_card(City CITY);
            void remove_cards(){cards.clear();};
    };
}