#ifndef SECURITY_H
#define SECURITY_H
#include "Software.h"
#include <iostream>
#include <string>

using namespace std;

class Security : public Software {
    private:
        string typeMalware;
    
    public: 
        Security(string _name, string _dev, int _age, CircularListUser _list, int _price, string _typeMalware) : Software(_name,_dev,_age,_list,_price), typeMalware(_typeMalware){
            this-> typeMalware = _typeMalware;
        }
};
#endif
