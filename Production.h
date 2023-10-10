#ifndef PRODUCTION_H
#define PRODUCTION_H
#include "Software.h"
#include <iostream>
#include <string>

using namespace std;

class Production : public Software {
    private:
        string type;

    public: 
        Production(string _name, string _dev, int _age, CircularListUser _list, int _price, string _type) : Software(_name, _dev, _age, _list, _price), type(_type){
            this->type = _type;
        }
        virtual void printName() override {
            cout << name <<"\n";
        }
        string getType(){
            return type;
        }
        void setType(string _type){
            type = _type;
        }
};
#endif