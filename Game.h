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

        virtual void printName() override {
            cout << name <<"\n";
        }

        string getGender(){
            return gender;
        }

        void setGender(string _gender){
            gender = _gender;
        }
    };

#endif