#ifndef SOFTWARE_H
#define SOFTWARE_H

#include <iostream>
#include <string>
#include "CircularListUser.h"

using namespace std;

class Software{
    protected:
        string name,dev;
        int age, price;
        CircularListUser list;
    public:
        Software(string _name, string _dev, int _age, CircularListUser _list,int _price){
            this->name = _name;
            this->dev = _dev;
            this->age = _age;
            this->list = _list;
            this->price = _price;
        }

        virtual void printName() {
            cout << name <<" -- "<<dev<<" -- "<<age<<" -- "<<price;
        }
};
#endif