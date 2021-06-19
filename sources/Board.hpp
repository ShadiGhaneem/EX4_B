#pragma once
#include "City.hpp"
#include "Color.hpp"
#include <map>
#include <set>
#include <iostream>

namespace pandemic{
    class Board{
        
        static std :: map<City, std::set<City>> NI;
        std :: map<City, int> DISEAS;
        std::set<City> STATIONS;
        std::set <Color> CURES;
        public:
            Board(){}
            int& operator[] (City c);
            bool is_clean();
            void remove_cures(){CURES.clear();};
            void remove_stations(){STATIONS.clear();};
            friend std::ostream& operator<<(std::ostream& os, const Board& b);
            /*_______________HELP FUNCTIONS__________________*/
            static bool IS_NI(City& FIRST, City&SECON);
            void ADD_STATION(City c);
            bool HAS_SATION(City c);
            void ADD_CURE(Color c);
            bool DIS_CURE(Color c);
            static Color GET_COLOR(City c);

    };
}