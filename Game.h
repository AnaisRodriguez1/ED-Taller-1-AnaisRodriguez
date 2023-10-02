#ifndef GAME_H
#define GAME_H
#include "Software.h"
#include <iostream>
#include <string>
#include <list>


using namespace std;

class Game : public Software {
private:
    string gender;
    list<string> listGender;
    int qtyGender = 10;

public:
    Game(string _name, string _dev, int _age, CircularListUser _list,int _price,string gender)
        : Software(_name, _dev, _age, _list,_price){

        listGender.push_back("FPS");
        listGender.push_back("MMO");
        listGender.push_back("PUZZLE");
        listGender.push_back("INDIE");
        listGender.push_back("SPORTS");
        listGender.push_back("RPG");
        listGender.push_back("ACTION");
        listGender.push_back("SIMULATION");
        listGender.push_back("CYBERPUNK");
        listGender.push_back("CASUAL");

    }

    void addGender(string _gender) {
        listGender.push_back(_gender);
        qtyGender++;
    }

    void deleteGender(string _gender) {
        listGender.remove(_gender);
        qtyGender--;
    }
};
#endif