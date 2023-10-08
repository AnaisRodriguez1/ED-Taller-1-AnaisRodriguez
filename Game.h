#ifndef GAME_H
#define GAME_H
#include "Software.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Game : public Software {
    private:
        string gender;
        int qtyGender = 10;

    public:
        Game(string _name, string _dev, int _age, CircularListUser _list, int _price, string _gender)
            : Software(_name, _dev, _age, _list, _price), gender(_gender) {
                this->gender = _gender;
        }

        vector<Game*> deleteGame(int gameIndex,vector<Game*> listGames){
            listGames.erase(listGames.begin() + gameIndex);
        }

        vector<Game*> buyGame (CircularListUser listUsers){
            Game *game21 = new Game("Assassin's Creed Valhalla","Ubisoft",18,listUsers,4999,"Action-Adventure");
            Game *game22 = new Game("The Elder Scrolls V: Skyrim","Bethesda",17,listUsers,3999,"Action-RPG");
            Game *game23 = new Game("Call of Duty: Warzone","Activision",18,listUsers,0,"Battle Royale");
            Game *game24 = new Game("Among Us","InnerSloth",10,listUsers,499,"Social Deduction");
            Game *game25 = new Game("Genshin Impact","miHoYo",12,listUsers,0,"Action-RPG");
            Game *game26 = new Game("Terraria","Re-Logic",10,listUsers,1499,"Sandbox");
            Game *game27 = new Game("Overwatch","Blizzard Entertainment",13,listUsers,1999,"First-Person Shooter");
            Game *game28 = new Game("Animal Crossing: New Horizons","Nintendo",3,listUsers,5999,"Life Simulation");
            Game *game29 = new Game("Hades","Supergiant Games",12,listUsers,1999,"Roguelike");
            Game *game30 = new Game("Celeste","Maddy Makes Games",10,listUsers,999,"Platformer");

            vector<Game*> listGamesPurchase;
            listGamesPurchase.push_back(game21);listGamesPurchase.push_back(game22);listGamesPurchase.push_back(game23);
            listGamesPurchase.push_back(game24);listGamesPurchase.push_back(game25);listGamesPurchase.push_back(game26);
            listGamesPurchase.push_back(game27);listGamesPurchase.push_back(game28);listGamesPurchase.push_back(game29);
            listGamesPurchase.push_back(game30);
        }
    };
    


#endif