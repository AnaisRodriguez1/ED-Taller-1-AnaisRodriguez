#ifndef BROWSER_H
#define BROWSER_H
#include "Software.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Browser : public Software {
    private:
        vector<string> history;

    public: 
        Browser(string _name, string _dev, int _age, CircularListUser _list, int _price, vector<string> _history) : Software(_name, _dev, _age, _list, _price),history(_history){
            this->history = _history;
        }

};
#endif