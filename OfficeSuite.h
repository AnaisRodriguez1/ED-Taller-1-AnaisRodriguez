#ifndef OFFICESUITE_H
#define OFFICESUITE_H
#include "Software.h"
#include <iostream>
#include <string>

using namespace std;

class OfficeSuite : public Software {
    private:
        int qtyArch;

    public: 
        OfficeSuite(string _name, string _dev, int _age, CircularListUser _list, int _price, int _qtyArch) : Software(_name, _dev, _age, _list, _price),qtyArch(_qtyArch){
            this->qtyArch = _qtyArch;
        }

};
#endif